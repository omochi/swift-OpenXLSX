#pragma once

#include "./SXLCommon.hpp"

OpenXLSX::XLCellValue XLCellValue_initEmpty();
OpenXLSX::XLCellValue XLCellValue_initBoolean(bool value);
OpenXLSX::XLCellValue XLCellValue_initInteger(int64_t value);
OpenXLSX::XLCellValue XLCellValue_initFloat(double value);
OpenXLSX::XLCellValue XLCellValue_initError(const std::string & value);
OpenXLSX::XLCellValue XLCellValue_initString(const std::string & value);

bool XLCellValue_getBoolean(const OpenXLSX::XLCellValue &self);
int64_t XLCellValue_getInteger(const OpenXLSX::XLCellValue &self);
double XLCellValue_getFloat(const OpenXLSX::XLCellValue &self);
std::string XLCellValue_getString(const OpenXLSX::XLCellValue &self);
