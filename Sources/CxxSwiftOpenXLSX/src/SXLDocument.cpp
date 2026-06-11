#include "SXLDocument.hpp"

using namespace OpenXLSX;

OpenXLSX::XLDocument * XLDocument_new() {
    return new XLDocument();
}

void XLDocument_delete(OpenXLSX::XLDocument *self) {
    delete self;
}

void XLDocument_suppressWarnings(OpenXLSX::XLDocument &self) {
    self.suppressWarnings();
}

void XLDocument_open(OpenXLSX::XLDocument &self, const std::string &docPath, std::exception_ptr & error) {
    try {
        self.open(docPath);
    } catch (...) {
        error = std::current_exception();
    }
}

void XLDocument_create(OpenXLSX::XLDocument &self, const std::string& fileName, bool forceOverwrite, std::exception_ptr & error) {
    try {
        self.create(fileName, forceOverwrite);
    } catch (...) {
        error = std::current_exception();
    }
}

void XLDocument_save(OpenXLSX::XLDocument &self, std::exception_ptr & error) {
    try {
        self.save();
    } catch (...) {
        error = std::current_exception();
    }
}

void XLDocument_saveAs(OpenXLSX::XLDocument &self, const std::string& fileName, bool forceOverwrite, std::exception_ptr & error) {
    try {
        self.saveAs(fileName, forceOverwrite);
    } catch (...) {
        error = std::current_exception();
    }
}

OpenXLSX::XLWorkbook XLDocument_workbook(const OpenXLSX::XLDocument &self) {
    return self.workbook();
}

bool XLDocument_isOpen(const OpenXLSX::XLDocument &self) {
    return self.isOpen();
}

OpenXLSX::XLStyles & XLDocument_styles(OpenXLSX::XLDocument &self) {
    return self.styles();
}
