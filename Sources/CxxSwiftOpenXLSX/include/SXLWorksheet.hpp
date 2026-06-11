#pragma once

#include "./SXLCommon.hpp"

std::string XLWorksheet_name(const OpenXLSX::XLWorksheet &self);
void XLWorksheet_setName(const OpenXLSX::XLWorksheet &self, const std::string & name);

std::optional<OpenXLSX::XLCell> XLWorksheet_cell(const OpenXLSX::XLWorksheet &self, const OpenXLSX::XLCellReference &ref, std::exception_ptr & error);

std::optional<OpenXLSX::XLRow> XLWorksheet_row(const OpenXLSX::XLWorksheet &self, uint32_t row, std::exception_ptr & error);

std::string XLWorksheet_extList(const OpenXLSX::XLWorksheet &self);
void XLWorksheet_setExtList(const OpenXLSX::XLWorksheet &self, const std::string & xml, std::exception_ptr & error);

std::optional<OpenXLSX::XLColumn> XLWorksheet_column(const OpenXLSX::XLWorksheet &self, uint16_t column, std::exception_ptr & error);
