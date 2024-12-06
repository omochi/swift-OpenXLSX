import Foundation

extension Date {
    public init(excel: Double) {
        let unix = XLCellValue.excelTimeToUnixTime(excel)
        self.init(timeIntervalSince1970: unix)
    }

    public var excelTime: Double {
        XLCellValue.unixTimeToExcelTime(timeIntervalSince1970)
    }
}
