#include "SXLCellReference.hpp"

using namespace OpenXLSX;

std::optional<OpenXLSX::XLCellReference> XLCellReference_init(const std::string & address, std::optional<std::string> & error) {
    try {
        return XLCellReference(address);
    } catch (const std::exception & e) {
        error = e.what();
        return std::nullopt;
    }
}

std::optional<OpenXLSX::XLCellReference> XLCellReference_init(uint32_t row, uint16_t column, std::optional<std::string> & error) {
    try {
        return XLCellReference(row, column);
    } catch (const std::exception & e) {
        error = e.what();
        return std::nullopt;
    }
}

void XLCellReference_setRow(OpenXLSX::XLCellReference & self, uint32_t value, std::optional<std::string> & error) {
    try {
        self.setRow(value);
    } catch (const std::exception & e) {
        error = e.what();
    }
}

void XLCellReference_setColumn(OpenXLSX::XLCellReference & self, uint16_t value, std::optional<std::string> & error) {
    try {
        self.setColumn(value);
    } catch (const std::exception & e) {
        error = e.what();
    }
}

void XLCellReference_setAddress(OpenXLSX::XLCellReference & self, const std::string & value, std::optional<std::string> & error) {
    try {
        self.setAddress(value);
    } catch (const std::exception & e) {
        error = e.what();
    }
}
