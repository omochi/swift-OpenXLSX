#pragma once

#include "./SXLCommon.hpp"

uint32_t XLCellFormat_numberFormatId(const OpenXLSX::XLCellFormat & self);
void XLCellFormat_setNumberFormatId(const OpenXLSX::XLCellFormat & self, uint32_t value);

bool XLCellFormat_applyNumberFormat(const OpenXLSX::XLCellFormat & self);
void XLCellFormat_setApplyNumberFormat(const OpenXLSX::XLCellFormat & self, bool value);
