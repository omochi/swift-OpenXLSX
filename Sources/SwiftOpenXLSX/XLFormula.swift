import CxxSwiftXLSX

public struct XLFormula: CustomStringConvertible {
    var formula: OpenXLSX.XLFormula

    init(formula: OpenXLSX.XLFormula) {
        self.formula = formula
    }

    public init(string: String) {
        self.init(formula: XLFormula_init(std.string(string)))
    }

    public var description: String {
        String(formula.get())
    }
}
