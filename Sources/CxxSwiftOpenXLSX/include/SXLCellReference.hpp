#pragma once

#include "./SXLCommon.hpp"

std::optional<OpenXLSX::XLCellReference> XLCellReference_init(const std::string & address, std::exception_ptr & error) noexcept;
std::optional<OpenXLSX::XLCellReference> XLCellReference_init(uint32_t row, uint16_t column, std::exception_ptr & error) noexcept;

void XLCellReference_setRow(OpenXLSX::XLCellReference & self, uint32_t value, std::exception_ptr & error) noexcept;
void XLCellReference_setColumn(OpenXLSX::XLCellReference & self, uint16_t value, std::exception_ptr & error) noexcept;
void XLCellReference_setAddress(OpenXLSX::XLCellReference & self, const std::string & value, std::exception_ptr & error) noexcept;
