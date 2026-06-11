#pragma once

#include "./SXLCommon.hpp"

OpenXLSX::XLCellValue XLCell_value(const OpenXLSX::XLCell &self) noexcept;
void XLCell_setValue(const OpenXLSX::XLCell &self, const OpenXLSX::XLCellValue &value) noexcept;

OpenXLSX::XLCellReference XLCell_cellReference(const OpenXLSX::XLCell &self) noexcept;

OpenXLSX::XLFormula XLCell_formula(const OpenXLSX::XLCell &self) noexcept;
void XLCell_setFormula(const OpenXLSX::XLCell &self, const OpenXLSX::XLFormula &value) noexcept;

size_t XLCell_cellFormat(const OpenXLSX::XLCell &self) noexcept;
void XLCell_setCellFormat(const OpenXLSX::XLCell &self, size_t index) noexcept;
