import CxxSwiftXLSX

public struct XLCellFormat {
    init(
        document: XLDocument,
        format: OpenXLSX.XLCellFormat
    ) {
        self.document = document
        self.format = format
    }
    
    var document: XLDocument
    var format: OpenXLSX.XLCellFormat

    public var numberFormatID: Int {
        get {
            Int(XLCellFormat_numberFormatId(format))
        }
        nonmutating set {
            XLCellFormat_setNumberFormatId(format, UInt32(newValue))
        }
    }

    public var applyNumberFormat: Bool {
        get {
            XLCellFormat_applyNumberFormat(format)
        }
        nonmutating set {
            XLCellFormat_setApplyNumberFormat(format, newValue)
        }
    }

    public var applyProtection: Bool {
        get {
            XLCellFormat_applyProtection(format)
        }
        nonmutating set {
            XLCellFormat_setApplyProtection(format, newValue)
        }
    }

    public var locked: Bool {
        get {
            XLCellFormat_locked(format)
        }
        nonmutating set {
            XLCellFormat_setLocked(format, newValue)
        }
    }
}
