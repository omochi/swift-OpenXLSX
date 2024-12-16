import CxxSwiftXLSX

public struct XLNumberFormat {
    init(document: XLDocument, format: OpenXLSX.XLNumberFormat) {
        self.document = document
        self.format = format
    }
    
    var document: XLDocument
    var format: OpenXLSX.XLNumberFormat

    public var numberFormatID: Int {
        get {
            Int(XLNumberFormat_numberFormatId(format))
        }
        nonmutating set {
            XLNumberFormat_setNumberFormatId(format, UInt32(newValue))
        }
    }

    public var formatCode: String {
        get {
            String(XLNumberFormat_formatCode(format))
        }
        nonmutating set {
            XLNumberFormat_setFormatCode(format, std.string(newValue))
        }
    }
}
