#include "SXLNumberFormat.hpp"

using namespace OpenXLSX;

uint32_t XLNumberFormat_numberFormatId(const OpenXLSX::XLNumberFormat & self) {
    return self.numberFormatId();
}

std::string XLNumberFormat_formatCode(const OpenXLSX::XLNumberFormat & self) {
    return self.formatCode();
}

void XLNumberFormat_setNumberFormatId(const OpenXLSX::XLNumberFormat & self, uint32_t newNumberFormatId) {
    const_cast<XLNumberFormat &>(self).setNumberFormatId(newNumberFormatId);
}

void XLNumberFormat_setFormatCode(const OpenXLSX::XLNumberFormat & self, std::string newFormatCode) {
    const_cast<XLNumberFormat &>(self).setFormatCode(newFormatCode);
}
