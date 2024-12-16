#pragma once

#include "./SXLCommon.hpp"

bool XLSheet_isWorksheet(const OpenXLSX::XLSheet &self);
bool XLSheet_isChartsheet(const OpenXLSX::XLSheet &self);

OpenXLSX::XLWorksheet XLSheet_getWorksheet(const OpenXLSX::XLSheet &self);
OpenXLSX::XLChartsheet XLSheet_getChartsheet(const OpenXLSX::XLSheet &self);

