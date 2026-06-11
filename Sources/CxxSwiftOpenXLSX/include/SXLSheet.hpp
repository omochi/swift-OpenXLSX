#pragma once

#include "./SXLCommon.hpp"

bool XLSheet_isWorksheet(const OpenXLSX::XLSheet &self) noexcept;
bool XLSheet_isChartsheet(const OpenXLSX::XLSheet &self) noexcept;

OpenXLSX::XLWorksheet XLSheet_getWorksheet(const OpenXLSX::XLSheet &self) noexcept;
OpenXLSX::XLChartsheet XLSheet_getChartsheet(const OpenXLSX::XLSheet &self) noexcept;

