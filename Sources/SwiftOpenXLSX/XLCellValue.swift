import Foundation
import CxxSwiftXLSX

public enum XLCellValue: CustomStringConvertible {
    case empty
    case boolean(Bool)
    case integer(Int)
    case float(Double)
    case error(String)
    case string(String)

    public var type: XLCellValueType {
        switch self {
        case .empty: return .empty
        case .boolean: return .boolean
        case .integer: return .integer
        case .float: return .float
        case .error: return .error
        case .string: return .string
        }
    }

    var value: OpenXLSX.XLCellValue {
        switch self {
        case .empty: return XLCellValue_initEmpty()
        case .boolean(let x): return XLCellValue_initBoolean(x)
        case .integer(let x): return XLCellValue_initInteger(Int64(x))
        case .float(let x): return XLCellValue_initFloat(x)
        case .error(let x): return XLCellValue_initError(std.string(x))
        case .string(let x): return XLCellValue_initString(std.string(x))
        }
    }

    init(value: OpenXLSX.XLCellValue) {
        switch XLCellValueType(type: value.type()) {
        case .empty: self = .empty
        case .boolean: self = .boolean(XLCellValue_getBoolean(value))
        case .integer: self = .integer(Int(XLCellValue_getInteger(value)))
        case .float: self = .float(XLCellValue_getFloat(value))
        case .error: self = .error(String(XLCellValue_getString(value)))
        case .string: self = .string(String(XLCellValue_getString(value)))
        }
    }

    public var description: String {
        switch self {
        case .empty: return ""
        case .boolean(let x): return x.description
        case .integer(let x): return x.description
        case .float(let x): return x.description
        case .error(let x): return x.description
        case .string(let x): return x.description
        }
    }

    public static func excelTimeToUnixTime(_ excel: Double) -> TimeInterval {
        return (excel - 25569) * 86400
    }

    public static func unixTimeToExcelTime(_ unix: TimeInterval) -> Double {
        return unix / 86400 + 25569
    }
}
