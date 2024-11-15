#pragma once

#include "./SXLCommon.hpp"

OpenXLSX::XLCell XLCellAssignable_asXLCell(const OpenXLSX::XLCellAssignable & self);

OpenXLSX::XLCellValue XLCell_value(const OpenXLSX::XLCell &self);
void XLCell_setValue(const OpenXLSX::XLCell &self, const OpenXLSX::XLCellValue &value);

OpenXLSX::XLCellReference XLCell_cellReference(const OpenXLSX::XLCell &self);

OpenXLSX::XLFormula XLCell_formula(const OpenXLSX::XLCell &self);
void XLCell_setFormula(const OpenXLSX::XLCell &self, const OpenXLSX::XLFormula &value);
