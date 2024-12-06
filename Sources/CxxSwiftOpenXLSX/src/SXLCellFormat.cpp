#include "SXLCellFormat.hpp"

using namespace OpenXLSX;

std::optional<uint32_t> XLCellFormat_numberFormatId(const OpenXLSX::XLCellFormat & self) {
    uint32_t id = self.numberFormatId();
    if (id == OpenXLSX::XLInvalidUInt32) {
        return std::nullopt;
    }
    return id;
}

void XLCellFormat_setNumberFormatId(OpenXLSX::XLCellFormat & self, uint32_t value) {
    self.setNumberFormatId(value);
}
