import CxxSwiftXLSX

public struct XLCell {
    init(document: XLDocument, cell: OpenXLSX.XLCell) {
        self.document = document
        self.cell = cell
    }

    var document: XLDocument
    var cell: OpenXLSX.XLCell

    public var value: XLCellValue {
        get {
            return XLCellValue(value: XLCell_value(cell))
        }
        nonmutating set {
            XLCell_setValue(cell, newValue.value)
        }
    }

    public var cellReference: XLCellReference {
        XLCellReference(reference: XLCell_cellReference(cell))
    }

    public var formula: XLFormula {
        get {
            return XLFormula(formula: XLCell_formula(cell))
        }
        nonmutating set {
            XLCell_setFormula(cell, newValue.formula)
        }
    }
}
