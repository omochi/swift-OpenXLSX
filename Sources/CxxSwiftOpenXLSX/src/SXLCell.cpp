#include "SXLCell.hpp"

using namespace OpenXLSX;

OpenXLSX::XLCellValue XLCell_value(const OpenXLSX::XLCell &self) noexcept {
    return self.value();
}

void XLCell_setValue(const OpenXLSX::XLCell &self, const OpenXLSX::XLCellValue &value) noexcept {
    const_cast<XLCell &>(self).value() = value;
}

OpenXLSX::XLCellReference XLCell_cellReference(const OpenXLSX::XLCell &self) noexcept {
    return self.cellReference();
}

OpenXLSX::XLFormula XLCell_formula(const OpenXLSX::XLCell &self) noexcept {
    return self.formula();
}

void XLCell_setFormula(const OpenXLSX::XLCell &self, const OpenXLSX::XLFormula &value) noexcept {
    const_cast<XLCell &>(self).formula() = value;
}

size_t XLCell_cellFormat(const OpenXLSX::XLCell &self) noexcept {
    return self.cellFormat();
}

void XLCell_setCellFormat(const OpenXLSX::XLCell &self, size_t index) noexcept {
    const_cast<XLCell &>(self).setCellFormat(index);
}
