import CxxSwiftXLSX

public struct XLWorkbook {
    init(document: XLDocument, workbook: OpenXLSX.XLWorkbook) {
        self.document = document
        self.workbook = workbook
    }

    var document: XLDocument
    var workbook: OpenXLSX.XLWorkbook

    public var sheets: [XLSheet] {
        let count = Int(XLWorkbook_sheetCount(workbook))
        return (0..<count).compactMap { (i) in
            XLSheet(
                document: document,
                sheet: XLWorkbook_sheet(workbook, UInt16(i + 1))
            )
        }
    }

    public var worksheets: [XLWorksheet] {
        sheets.compactMap(\.worksheet)
    }

    public var sheetNames: [String] {
        XLWorkbook_sheetNames(workbook).map(String.init)
    }

    public func sheet(name: String) -> XLSheet? {
        guard let sheet = try? withCxxException({ (e) in
            Optional(
                fromCxx: XLWorkbook_sheet(workbook, std.string(name), &e)
            )
        }) else { return nil }

        return XLSheet(document: document, sheet: sheet)
    }

    public func worksheet(name: String) throws -> XLWorksheet {
        let sheet = try withCxxOptionalOrException { (e) in
            XLWorkbook_worksheet(workbook, std.string(name), &e)
        }
        return XLWorksheet(document: document, worksheet: sheet)
    }

    public func deleteSheet(name: String) throws {
        try withCxxException { (e) in
            XLWorkbook_deleteSheet(workbook, std.string(name), &e)
        }
    }

    public func addWorksheet(name: String) throws {
        try withCxxException { (e) in
            XLWorkbook_addWorksheet(workbook, std.string(name), &e)
        }
    }

    public func cloneSheet(existingName: String, newName: String) throws {
        try withCxxException { (e) in
            XLWorkbook_cloneSheet(workbook, std.string(existingName), std.string(newName), &e)
        }
    }

    public func indexOfSheet(name: String) -> Int? {
        guard let index = try? withCxxException({ (e) in
            Optional(
                fromCxx: XLWorkbook_indexOfSheet(workbook, std.string(name), &e)
            )
        }) else { return nil }

        return Int(index)
    }

    public func setSheetIndex(name: String, index: Int) throws {
        try withCxxException { (e) in
            XLWorkbook_setSheetIndex(workbook, std.string(name), UInt32(index), &e)
        }
    }
}
