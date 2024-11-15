#include "SXLCell.hpp"

using namespace OpenXLSX;

OpenXLSX::XLCell XLCellAssignable_asXLCell(const OpenXLSX::XLCellAssignable & self) {
    return self;
}

OpenXLSX::XLCellValue XLCell_value(const OpenXLSX::XLCell &self) {
    return self.value();
}

void XLCell_setValue(const OpenXLSX::XLCell &self, const OpenXLSX::XLCellValue &value) {
    const_cast<XLCell &>(self).value() = value;
}

OpenXLSX::XLCellReference XLCell_cellReference(const OpenXLSX::XLCell &self) {
    return self.cellReference();
}

OpenXLSX::XLFormula XLCell_formula(const OpenXLSX::XLCell &self) {
    return self.formula();
}

void XLCell_setFormula(const OpenXLSX::XLCell &self, const OpenXLSX::XLFormula &value) {
    const_cast<XLCell &>(self).formula() = value;
}
