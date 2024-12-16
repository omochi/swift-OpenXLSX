#pragma once

#include "./SXLCommon.hpp"

uint32_t XLNumberFormat_numberFormatId(const OpenXLSX::XLNumberFormat & self);
std::string XLNumberFormat_formatCode(const OpenXLSX::XLNumberFormat & self);
void XLNumberFormat_setNumberFormatId(const OpenXLSX::XLNumberFormat & self, uint32_t newNumberFormatId);
void XLNumberFormat_setFormatCode(const OpenXLSX::XLNumberFormat & self, std::string newFormatCode);
