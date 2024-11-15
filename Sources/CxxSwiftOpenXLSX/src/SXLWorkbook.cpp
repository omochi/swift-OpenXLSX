#include "SXLWorkbook.hpp"

using namespace OpenXLSX;

unsigned int XLWorkbook_sheetCount(const OpenXLSX::XLWorkbook &self) {
    return self.sheetCount();
}

OpenXLSX::XLSheet XLWorkbook_sheet(const OpenXLSX::XLWorkbook &self, uint16_t index) {
    return const_cast<XLWorkbook &>(self).sheet(index);
}

std::vector<std::string> XLWorkbook_sheetNames(const OpenXLSX::XLWorkbook &self) {
    return self.sheetNames();
}

std::optional<OpenXLSX::XLSheet> XLWorkbook_sheet(const OpenXLSX::XLWorkbook &self, const std::string & name, std::optional<std::string> & error) {
    try {
        return const_cast<XLWorkbook &>(self).sheet(name);
    } catch (const std::exception & e) {
        error = e.what();
        return std::nullopt;
    }
}

std::optional<OpenXLSX::XLWorksheet> XLWorkbook_worksheet(const OpenXLSX::XLWorkbook &self, const std::string& sheetName, std::optional<std::string> & error) {
    try {
        return const_cast<XLWorkbook &>(self).worksheet(sheetName);
    } catch (const std::exception & e) {
        error = e.what();
        return std::nullopt;
    }
}

void XLWorkbook_deleteSheet(const OpenXLSX::XLWorkbook &self, const std::string & name, std::optional<std::string> & error) {
    try {
        return const_cast<XLWorkbook &>(self).deleteSheet(name);
    } catch (const std::exception & e) {
        error = e.what();
    }
}

void XLWorkbook_addWorksheet(const OpenXLSX::XLWorkbook &self, const std::string & name, std::optional<std::string> & error) {
    try {
        return const_cast<XLWorkbook &>(self).addWorksheet(name);
    } catch (const std::exception & e) {
        error = e.what();
    }
}

void XLWorkbook_cloneSheet(const OpenXLSX::XLWorkbook &self, const std::string& existingName, const std::string& newName, std::optional<std::string> & error) {
    try {
        return const_cast<XLWorkbook &>(self).cloneSheet(existingName, newName);
    } catch (const std::exception & e) {
        error = e.what();
    }
}

std::optional<unsigned int> XLWorkbook_indexOfSheet(const OpenXLSX::XLWorkbook &self, const std::string& sheetName, std::optional<std::string> & error) {
    try {
        return self.indexOfSheet(sheetName);
    } catch (const std::exception & e) {
        error = e.what();
        return std::nullopt;
    }
}

void XLWorkbook_setSheetIndex(const OpenXLSX::XLWorkbook &self, const std::string& sheetName, unsigned int index, std::optional<std::string> & error) {
    try {
        const_cast<XLWorkbook &>(self).setSheetIndex(sheetName, index);
    } catch (const std::exception & e) {
        error = e.what();
    }
}
