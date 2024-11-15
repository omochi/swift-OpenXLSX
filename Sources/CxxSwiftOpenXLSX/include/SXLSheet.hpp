#pragma once

#include "./SXLCommon.hpp"

bool XLSheet_isWorksheet(const OpenXLSX::XLSheet &self);
bool XLSheet_isChartsheet(const OpenXLSX::XLSheet &self);

OpenXLSX::XLWorksheet XLSheet_getWorksheet(const OpenXLSX::XLSheet &self);
OpenXLSX::XLChartsheet XLSheet_getChartsheet(const OpenXLSX::XLSheet &self);

std::string XLWorksheet_name(const OpenXLSX::XLWorksheet &self);
void XLWorksheet_setName(const OpenXLSX::XLWorksheet &self, const std::string & name);

std::optional<OpenXLSX::XLCellAssignable> XLWorksheet_cell(const OpenXLSX::XLWorksheet &self, const OpenXLSX::XLCellReference &ref, std::optional<std::string> & error);

std::optional<OpenXLSX::XLRow> XLWorksheet_row(const OpenXLSX::XLWorksheet &self, uint32_t row, std::optional<std::string> & error);
