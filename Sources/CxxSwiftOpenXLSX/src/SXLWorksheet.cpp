#include "SXLWorksheet.hpp"

using namespace OpenXLSX;

std::string XLWorksheet_name(const OpenXLSX::XLWorksheet &self) noexcept {
    return self.name();
}

void XLWorksheet_setName(const OpenXLSX::XLWorksheet &self, const std::string & name) noexcept {
    const_cast<XLWorksheet &>(self).setName(name);
}

std::optional<OpenXLSX::XLCell> XLWorksheet_cell(const OpenXLSX::XLWorksheet &self, const OpenXLSX::XLCellReference& ref, std::exception_ptr & error) noexcept {
    try {
        return self.cell(ref);
    } catch (...) {
        error = std::current_exception();
        return std::nullopt;
    }
}

std::optional<OpenXLSX::XLRow> XLWorksheet_row(const OpenXLSX::XLWorksheet &self, uint32_t row, std::exception_ptr & error) noexcept {
    try {
        return self.row(row);
    } catch (...) {
        error = std::current_exception();
        return std::nullopt;
    }
}

std::string XLWorksheet_extList(const OpenXLSX::XLWorksheet &self) noexcept {
    return self.extList();
}

void XLWorksheet_setExtList(const OpenXLSX::XLWorksheet &self, const std::string & xml, std::exception_ptr & error) noexcept {
    try {
        const_cast<XLWorksheet &>(self).setExtList(xml);
    } catch (...) {
        error = std::current_exception();
    }
}

std::optional<OpenXLSX::XLColumn> XLWorksheet_column(const OpenXLSX::XLWorksheet &self, uint16_t column, std::exception_ptr & error) noexcept {
    try {
        return self.column(column);
    } catch (...) {
        error = std::current_exception();
        return std::nullopt;
    }
}
