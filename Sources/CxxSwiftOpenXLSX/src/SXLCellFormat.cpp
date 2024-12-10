#include "SXLCellFormat.hpp"

using namespace OpenXLSX;

uint32_t XLCellFormat_numberFormatId(const OpenXLSX::XLCellFormat & self) {
    return self.numberFormatId();
}

void XLCellFormat_setNumberFormatId(const OpenXLSX::XLCellFormat & self, uint32_t value) {
    const_cast<OpenXLSX::XLCellFormat &>(self).setNumberFormatId(value);
}

bool XLCellFormat_applyNumberFormat(const OpenXLSX::XLCellFormat & self) {
    return self.applyNumberFormat();
}

void XLCellFormat_setApplyNumberFormat(const OpenXLSX::XLCellFormat & self, bool value) {
    const_cast<OpenXLSX::XLCellFormat &>(self).setApplyNumberFormat(value);
}

bool XLCellFormat_applyProtection(const OpenXLSX::XLCellFormat & self) {
    return self.applyProtection();
}

void XLCellFormat_setApplyProtection(const OpenXLSX::XLCellFormat & self, bool value) {
    const_cast<OpenXLSX::XLCellFormat &>(self).setApplyProtection(value);
}

bool XLCellFormat_locked(const OpenXLSX::XLCellFormat & self) {
    return self.locked();
}

bool XLCellFormat_setLocked(const OpenXLSX::XLCellFormat & self, bool value) {
    const_cast<OpenXLSX::XLCellFormat &>(self).setLocked(value);
}
