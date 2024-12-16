import CxxSwiftXLSX

public struct XLColumn {
    init(document: XLDocument, column: OpenXLSX.XLColumn) {
        self.document = document
        self.column = column
    }
    
    var document: XLDocument
    var column: OpenXLSX.XLColumn

    public var width: Float {
        get {
            XLColumn_width(column)
        }
        nonmutating set {
            XLColumn_setWidth(column, newValue)
        }
    }
}
