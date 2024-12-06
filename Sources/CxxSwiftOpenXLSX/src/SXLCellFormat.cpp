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
