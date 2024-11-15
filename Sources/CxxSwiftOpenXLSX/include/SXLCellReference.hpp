#pragma once

#include "./SXLCommon.hpp"

std::optional<OpenXLSX::XLCellReference> XLCellReference_init(const std::string & address, std::optional<std::string> & error);
std::optional<OpenXLSX::XLCellReference> XLCellReference_init(uint32_t row, uint16_t column, std::optional<std::string> & error);

void XLCellReference_setRow(OpenXLSX::XLCellReference & self, uint32_t value, std::optional<std::string> & error);
void XLCellReference_setColumn(OpenXLSX::XLCellReference & self, uint16_t value, std::optional<std::string> & error);
void XLCellReference_setAddress(OpenXLSX::XLCellReference & self, const std::string & value, std::optional<std::string> & error);
