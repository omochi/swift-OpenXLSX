#pragma once

#include "./SXLCommon.hpp"

size_t XLCellFormats_count(const OpenXLSX::XLCellFormats & self);
OpenXLSX::XLCellFormat XLCellFormats_cellFormatByIndex(const OpenXLSX::XLCellFormats & self, size_t index);
size_t XLCellFormats_create(const OpenXLSX::XLCellFormats & self);
