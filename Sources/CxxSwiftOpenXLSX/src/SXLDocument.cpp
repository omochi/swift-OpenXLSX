#include "SXLDocument.hpp"

using namespace OpenXLSX;

OpenXLSX::XLDocument * XLDocument_new() noexcept {
    return new XLDocument();
}

void XLDocument_delete(OpenXLSX::XLDocument *self) noexcept {
    delete self;
}

void XLDocument_suppressWarnings(OpenXLSX::XLDocument &self) noexcept {
    self.suppressWarnings();
}

void XLDocument_open(OpenXLSX::XLDocument &self, const std::string &docPath, std::exception_ptr & error) noexcept {
    try {
        self.open(docPath);
    } catch (...) {
        error = std::current_exception();
    }
}

void XLDocument_create(OpenXLSX::XLDocument &self, const std::string& fileName, bool forceOverwrite, std::exception_ptr & error) noexcept {
    try {
        self.create(fileName, forceOverwrite);
    } catch (...) {
        error = std::current_exception();
    }
}

void XLDocument_save(OpenXLSX::XLDocument &self, std::exception_ptr & error) noexcept {
    try {
        self.save();
    } catch (...) {
        error = std::current_exception();
    }
}

void XLDocument_saveAs(OpenXLSX::XLDocument &self, const std::string& fileName, bool forceOverwrite, std::exception_ptr & error) noexcept {
    try {
        self.saveAs(fileName, forceOverwrite);
    } catch (...) {
        error = std::current_exception();
    }
}

OpenXLSX::XLWorkbook XLDocument_workbook(const OpenXLSX::XLDocument &self) noexcept {
    return self.workbook();
}

bool XLDocument_isOpen(const OpenXLSX::XLDocument &self) noexcept {
    return self.isOpen();
}

OpenXLSX::XLStyles & XLDocument_styles(OpenXLSX::XLDocument &self) noexcept {
    return self.styles();
}
