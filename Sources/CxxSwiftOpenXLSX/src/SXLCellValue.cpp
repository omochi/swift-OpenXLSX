#include "SXLCellValue.hpp"

using namespace OpenXLSX;

OpenXLSX::XLCellValue XLCellValue_initEmpty() noexcept {
    return XLCellValue();
}

OpenXLSX::XLCellValue XLCellValue_initBoolean(bool value) noexcept {
    return XLCellValue(value);
}

OpenXLSX::XLCellValue XLCellValue_initInteger(int64_t value) noexcept {
    return XLCellValue(value);
}

OpenXLSX::XLCellValue XLCellValue_initFloat(double value) noexcept {
    return XLCellValue(value);
}

OpenXLSX::XLCellValue XLCellValue_initError(const std::string & value) noexcept {
    return XLCellValue(value);
}

OpenXLSX::XLCellValue XLCellValue_initString(const std::string & value) noexcept {
    return XLCellValue(value);
}

bool XLCellValue_getBoolean(const OpenXLSX::XLCellValue &self) noexcept {
    return self.get<bool>();
}

int64_t XLCellValue_getInteger(const OpenXLSX::XLCellValue &self) noexcept {
    return self.get<int64_t>();
}

double XLCellValue_getFloat(const OpenXLSX::XLCellValue &self) noexcept {
    return self.get<double>();
}

std::string XLCellValue_getString(const OpenXLSX::XLCellValue &self) noexcept {
    return self.get<std::string>();
}
