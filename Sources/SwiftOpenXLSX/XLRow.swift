import CxxSwiftXLSX

public struct XLRow {
    var document: XLDocument
    var row: OpenXLSX.XLRow

    init(
        document: XLDocument,
        row: OpenXLSX.XLRow
    ) {
        self.document = document
        self.row = row
    }

    public var cellCount: Int {
        Int(row.cellCount())
    }    
}
