#pragma once

#include "./SXLCommon.hpp"

size_t XLNumberFormats_count(const OpenXLSX::XLNumberFormats * self) noexcept;
OpenXLSX::XLNumberFormat XLNumberFormats_numberFormatByIndex(const OpenXLSX::XLNumberFormats * self, OpenXLSX::XLStyleIndex index) noexcept;
OpenXLSX::XLStyleIndex XLNumberFormats_create(const OpenXLSX::XLNumberFormats * self) noexcept;
