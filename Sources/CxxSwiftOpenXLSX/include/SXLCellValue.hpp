#pragma once

#include "./SXLCommon.hpp"

OpenXLSX::XLCellValue XLCellValue_initEmpty() noexcept;
OpenXLSX::XLCellValue XLCellValue_initBoolean(bool value) noexcept;
OpenXLSX::XLCellValue XLCellValue_initInteger(int64_t value) noexcept;
OpenXLSX::XLCellValue XLCellValue_initFloat(double value) noexcept;
OpenXLSX::XLCellValue XLCellValue_initError(const std::string & value) noexcept;
OpenXLSX::XLCellValue XLCellValue_initString(const std::string & value) noexcept;

bool XLCellValue_getBoolean(const OpenXLSX::XLCellValue &self) noexcept;
int64_t XLCellValue_getInteger(const OpenXLSX::XLCellValue &self) noexcept;
double XLCellValue_getFloat(const OpenXLSX::XLCellValue &self) noexcept;
std::string XLCellValue_getString(const OpenXLSX::XLCellValue &self) noexcept;
