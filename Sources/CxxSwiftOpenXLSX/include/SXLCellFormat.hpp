#pragma once

#include "./SXLCommon.hpp"

std::optional<uint32_t> XLCellFormat_numberFormatId(const OpenXLSX::XLCellFormat & self);
void XLCellFormat_setNumberFormatId(OpenXLSX::XLCellFormat & self, uint32_t value);
