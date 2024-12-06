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

    public var numberFormatID: Int? {
        guard let x = Optional(fromCxx: XLCellFormat_numberFormatId(format)) else { return nil }
        return Int(x)
    }

    public mutating func setNumberFormatID(_ value: Int) {
        XLCellFormat_setNumberFormatId(&format, UInt32(value))
    }

    // https://learn.microsoft.com/ja-jp/dotnet/api/documentformat.openxml.spreadsheet.numberingformat?view=openxml-3.0.1
    public static let dateTimeNumberFormatIDs: Set<Int> = [
        14, 15, 16, 17, 18, 19, 20, 21, 22,
        27, 28, 29, 30, 31, 32, 33, 34, 35, 36,
        45, 46, 47,
        50, 51, 52, 53, 54, 55, 56, 57, 58,
    ]
}
