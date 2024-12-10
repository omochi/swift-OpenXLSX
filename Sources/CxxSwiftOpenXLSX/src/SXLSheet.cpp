#include "SXLSheet.hpp"

using namespace OpenXLSX;

bool XLSheet_isWorksheet(const OpenXLSX::XLSheet &self) {
    return self.isType<XLWorksheet>();
}

bool XLSheet_isChartsheet(const OpenXLSX::XLSheet &self) {
    return self.isType<XLChartsheet>();
}

OpenXLSX::XLWorksheet XLSheet_getWorksheet(const OpenXLSX::XLSheet &self) {
    return self.get<XLWorksheet>();
}

OpenXLSX::XLChartsheet XLSheet_getChartsheet(const OpenXLSX::XLSheet &self) {
    return self.get<XLChartsheet>();
}

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
