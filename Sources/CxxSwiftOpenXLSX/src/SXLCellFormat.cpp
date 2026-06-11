#include "SXLCellFormat.hpp"

using namespace OpenXLSX;

uint32_t XLCellFormat_numberFormatId(const OpenXLSX::XLCellFormat & self) noexcept {
    return self.numberFormatId();
}

void XLCellFormat_setNumberFormatId(const OpenXLSX::XLCellFormat & self, uint32_t value) noexcept {
    const_cast<OpenXLSX::XLCellFormat &>(self).setNumberFormatId(value);
}

bool XLCellFormat_applyNumberFormat(const OpenXLSX::XLCellFormat & self) noexcept {
    return self.applyNumberFormat();
}

void XLCellFormat_setApplyNumberFormat(const OpenXLSX::XLCellFormat & self, bool value) noexcept {
    const_cast<OpenXLSX::XLCellFormat &>(self).setApplyNumberFormat(value);
}

bool XLCellFormat_applyProtection(const OpenXLSX::XLCellFormat & self) noexcept {
    return self.applyProtection();
}

void XLCellFormat_setApplyProtection(const OpenXLSX::XLCellFormat & self, bool value) noexcept {
    const_cast<OpenXLSX::XLCellFormat &>(self).setApplyProtection(value);
}

bool XLCellFormat_locked(const OpenXLSX::XLCellFormat & self) noexcept {
    return self.locked();
}

void XLCellFormat_setLocked(const OpenXLSX::XLCellFormat & self, bool value) noexcept {
    const_cast<OpenXLSX::XLCellFormat &>(self).setLocked(value);
}
