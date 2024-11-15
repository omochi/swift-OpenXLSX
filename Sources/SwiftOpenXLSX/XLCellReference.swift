import CxxSwiftXLSX

public struct XLCellReference:
    Equatable & Hashable & Comparable &
    CustomStringConvertible
{
    var ref: OpenXLSX.XLCellReference

    public init(address: String) throws {
        ref = try withCxxOptionalOrException { (e) in
            XLCellReference_init(std.string(address), &e)
        }
    }

    public init(row: Int, column: Int) throws {
        ref = try withCxxOptionalOrException { (e) in
            XLCellReference_init(UInt32(row), UInt16(column), &e)
        }
    }

    init(reference: OpenXLSX.XLCellReference) {
        try! self.init(
            row: Int(reference.row()),
            column: Int(reference.column())
        )
    }

    public var row: Int {
        Int(ref.row())
    }

    public mutating func setRow(_ value: Int) throws {
        try withCxxException { (e) in
            XLCellReference_setRow(&ref, UInt32(value), &e)
        }
    }

    public var column: Int {
        Int(ref.column())
    }

    public mutating func setColumn(_ value: Int) throws {
        try withCxxException { (e) in
            XLCellReference_setColumn(&ref, UInt16(value), &e)
        }
    }

    public var address: String {
        String(ref.address())
    }

    public mutating func setAddress(_ value: String) throws {
        try withCxxException { (e) in
            XLCellReference_setAddress(&ref, std.string(value), &e)
        }
    }

    public var description: String { address }

    public static func ==(a: XLCellReference, b: XLCellReference) -> Bool {
        return a.row == b.row && a.column == b.column
    }

    public func hash(into hasher: inout Hasher) {
        hasher.combine(row)
        hasher.combine(column)
    }

    public static func <(a: XLCellReference, b: XLCellReference) -> Bool {
        if a.row != b.row {
            return a.row < b.row
        }
        return a.column < b.column
    }
}
