#include "SXLWorksheet.hpp"

using namespace OpenXLSX;

std::string XLWorksheet_name(const OpenXLSX::XLWorksheet &self) {
    return self.name();
}

void XLWorksheet_setName(const OpenXLSX::XLWorksheet &self, const std::string & name) {
    const_cast<XLWorksheet &>(self).setName(name);
}

std::optional<OpenXLSX::XLCell> XLWorksheet_cell(const OpenXLSX::XLWorksheet &self, const OpenXLSX::XLCellReference& ref, std::optional<std::string> & error) {
    try {
        return self.cell(ref);
    } catch (const std::exception & e) {
        error = e.what();
        return std::nullopt;
    }
}

std::optional<OpenXLSX::XLRow> XLWorksheet_row(const OpenXLSX::XLWorksheet &self, uint32_t row, std::optional<std::string> & error) {
    try {
        return self.row(row);
    } catch (const std::exception & e) {
        error = e.what();
        return std::nullopt;
    }
}

std::string XLWorksheet_extList(const OpenXLSX::XLWorksheet &self) {
    return self.extList();
}

void XLWorksheet_setExtList(const OpenXLSX::XLWorksheet &self, const std::string & xml, std::optional<std::string> & error) {
    try {
        const_cast<XLWorksheet &>(self).setExtList(xml);
    } catch (const std::exception & e) {
        error = e.what();
    }
}

std::optional<OpenXLSX::XLColumn> XLWorksheet_column(const OpenXLSX::XLWorksheet &self, uint16_t column, std::optional<std::string> & error) {
    try {
        return self.column(column);
    } catch (const std::exception & e) {
        error = e.what();
        return std::nullopt;
    }
}
