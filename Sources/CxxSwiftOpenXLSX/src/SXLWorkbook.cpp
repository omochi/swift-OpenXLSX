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

std::optional<OpenXLSX::XLSheet> XLWorkbook_sheet(const OpenXLSX::XLWorkbook &self, const std::string & name, std::exception_ptr & error) {
    try {
        return const_cast<XLWorkbook &>(self).sheet(name);
    } catch (...) {
        error = std::current_exception();
        return std::nullopt;
    }
}

std::optional<OpenXLSX::XLWorksheet> XLWorkbook_worksheet(const OpenXLSX::XLWorkbook &self, const std::string& sheetName, std::exception_ptr & error) {
    try {
        return const_cast<XLWorkbook &>(self).worksheet(sheetName);
    } catch (...) {
        error = std::current_exception();
        return std::nullopt;
    }
}

void XLWorkbook_deleteSheet(const OpenXLSX::XLWorkbook &self, const std::string & name, std::exception_ptr & error) {
    try {
        return const_cast<XLWorkbook &>(self).deleteSheet(name);
    } catch (...) {
        error = std::current_exception();
    }
}

void XLWorkbook_addWorksheet(const OpenXLSX::XLWorkbook &self, const std::string & name, std::exception_ptr & error) {
    try {
        return const_cast<XLWorkbook &>(self).addWorksheet(name);
    } catch (...) {
        error = std::current_exception();
    }
}

void XLWorkbook_cloneSheet(const OpenXLSX::XLWorkbook &self, const std::string& existingName, const std::string& newName, std::exception_ptr & error) {
    try {
        return const_cast<XLWorkbook &>(self).cloneSheet(existingName, newName);
    } catch (...) {
        error = std::current_exception();
    }
}

std::optional<unsigned int> XLWorkbook_indexOfSheet(const OpenXLSX::XLWorkbook &self, const std::string& sheetName, std::exception_ptr & error) {
    try {
        return self.indexOfSheet(sheetName);
    } catch (...) {
        error = std::current_exception();
        return std::nullopt;
    }
}

void XLWorkbook_setSheetIndex(const OpenXLSX::XLWorkbook &self, const std::string& sheetName, unsigned int index, std::exception_ptr & error) {
    try {
        const_cast<XLWorkbook &>(self).setSheetIndex(sheetName, index);
    } catch (...) {
        error = std::current_exception();
    }
}
