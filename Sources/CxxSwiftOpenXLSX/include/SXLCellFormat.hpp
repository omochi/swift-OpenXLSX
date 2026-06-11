#pragma once

#include "./SXLCommon.hpp"

uint32_t XLCellFormat_numberFormatId(const OpenXLSX::XLCellFormat & self) noexcept;
void XLCellFormat_setNumberFormatId(const OpenXLSX::XLCellFormat & self, uint32_t value) noexcept;

bool XLCellFormat_applyNumberFormat(const OpenXLSX::XLCellFormat & self) noexcept;
void XLCellFormat_setApplyNumberFormat(const OpenXLSX::XLCellFormat & self, bool value) noexcept;

bool XLCellFormat_applyProtection(const OpenXLSX::XLCellFormat & self) noexcept;
void XLCellFormat_setApplyProtection(const OpenXLSX::XLCellFormat & self, bool value) noexcept;

bool XLCellFormat_locked(const OpenXLSX::XLCellFormat & self) noexcept;
void XLCellFormat_setLocked(const OpenXLSX::XLCellFormat & self, bool value) noexcept;
