import CxxSwiftXLSX

public struct XLWorksheet {
    init(document: XLDocument, worksheet: OpenXLSX.XLWorksheet) {
        self.document = document
        self.worksheet = worksheet
    }

    var document: XLDocument
    var worksheet: OpenXLSX.XLWorksheet

    public var name: String {
        get {
            String(XLWorksheet_name(worksheet))
        }
        nonmutating set {
            XLWorksheet_setName(worksheet, std.string(newValue))
        }
    }

    public func cell(_ reference: XLCellReference) throws -> XLCell {
        let cell: OpenXLSX.XLCellAssignable = try withCxxOptionalOrException { (e) in
            XLWorksheet_cell(worksheet, reference.ref, &e)
        }

        return XLCell(
            document: document,
            cell: XLCellAssignable_asXLCell(cell)
        )
    }

    public func cell(row: Int, column: Int) throws -> XLCell {
        try cell(try XLCellReference(row: row, column: column))
    }

    public func cell(address: String) throws -> XLCell {
        try cell(try XLCellReference(address: address))
    }

    public var rowCount: Int {
        Int(worksheet.rowCount())
    }

    public func row(_ row: Int) throws -> XLRow {
        let row = try withCxxOptionalOrException { (e) in
            XLWorksheet_row(worksheet, UInt32(row), &e)
        }
        return XLRow(document: document, row: row)
    }

    public var rows: [XLRow] {
        return stride(from: 1, through: rowCount, by: 1).map { try! row($0) }
    }

    public var columnCount: Int {
        rows.reduce(0) { (s, x) in
            max(s, x.cellCount)
        }
    }
}
