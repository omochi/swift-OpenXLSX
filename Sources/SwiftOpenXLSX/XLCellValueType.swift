import CxxSwiftXLSX

public enum XLCellValueType {
    case empty
    case boolean
    case integer
    case float
    case error
    case string

    init(type: OpenXLSX.XLValueType) {
        switch type {
        case .Empty: self = .empty
        case .Boolean: self = .boolean
        case .Integer: self = .integer
        case .Float: self = .float
        case .Error: self = .error
        case .String: self = .string
        @unknown default: preconditionFailure("invalid XLValueType: \(type)")
        }
    }

    var type: OpenXLSX.XLValueType {
        switch self {
        case .empty: return .Empty
        case .boolean: return .Boolean
        case .integer: return .Integer
        case .float: return .Float
        case .error: return .Error
        case .string: return .String
        }
    }
}
