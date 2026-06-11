#include "SXLCellReference.hpp"

using namespace OpenXLSX;

std::optional<OpenXLSX::XLCellReference> XLCellReference_init(const std::string & address, std::exception_ptr & error) noexcept {
    try {
        return XLCellReference(address);
    } catch (...) {
        error = std::current_exception();
        return std::nullopt;
    }
}

std::optional<OpenXLSX::XLCellReference> XLCellReference_init(uint32_t row, uint16_t column, std::exception_ptr & error) noexcept {
    try {
        return XLCellReference(row, column);
    } catch (...) {
        error = std::current_exception();
        return std::nullopt;
    }
}

void XLCellReference_setRow(OpenXLSX::XLCellReference & self, uint32_t value, std::exception_ptr & error) noexcept {
    try {
        self.setRow(value);
    } catch (...) {
        error = std::current_exception();
    }
}

void XLCellReference_setColumn(OpenXLSX::XLCellReference & self, uint16_t value, std::exception_ptr & error) noexcept {
    try {
        self.setColumn(value);
    } catch (...) {
        error = std::current_exception();
    }
}

void XLCellReference_setAddress(OpenXLSX::XLCellReference & self, const std::string & value, std::exception_ptr & error) noexcept {
    try {
        self.setAddress(value);
    } catch (...) {
        error = std::current_exception();
    }
}
