import CxxSwiftXLSX

public enum XLConstants {
    public static var maxRow: Int {
        Int(SXLConstants_maxRow())
    }

    public static var maxColumn: Int {
        Int(SXLConstants_maxColumn())
    }
}
