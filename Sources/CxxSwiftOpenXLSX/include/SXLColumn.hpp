#pragma once

#include "./SXLCommon.hpp"

float XLColumn_width(const OpenXLSX::XLColumn & self) noexcept;
void XLColumn_setWidth(const OpenXLSX::XLColumn & self, float width) noexcept;
size_t XLColumn_format(const OpenXLSX::XLColumn & self) noexcept;
bool XLColumn_setFormat(const OpenXLSX::XLColumn & self, size_t cellFormatIndex) noexcept;
