#pragma once

#include "./SXLCommon.hpp"

OpenXLSX::XLCellValue XLCell_value(const OpenXLSX::XLCell &self);
void XLCell_setValue(const OpenXLSX::XLCell &self, const OpenXLSX::XLCellValue &value);

OpenXLSX::XLCellReference XLCell_cellReference(const OpenXLSX::XLCell &self);

OpenXLSX::XLFormula XLCell_formula(const OpenXLSX::XLCell &self);
void XLCell_setFormula(const OpenXLSX::XLCell &self, const OpenXLSX::XLFormula &value);

size_t XLCell_cellFormat(const OpenXLSX::XLCell &self);
void XLCell_setCellFormat(const OpenXLSX::XLCell &self, size_t index);
