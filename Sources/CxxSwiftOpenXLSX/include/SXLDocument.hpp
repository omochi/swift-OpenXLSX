#pragma once

#include "./SXLCommon.hpp"

OpenXLSX::XLDocument * XLDocument_new();

void XLDocument_delete(OpenXLSX::XLDocument *self);

void XLDocument_suppressWarnings(OpenXLSX::XLDocument &self);

void XLDocument_open(OpenXLSX::XLDocument &self, const std::string &docPath, std::optional<std::string> & error);

void XLDocument_create(OpenXLSX::XLDocument &self, const std::string& fileName, bool forceOverwrite, std::optional<std::string> & error);

void XLDocument_save(OpenXLSX::XLDocument &self, std::optional<std::string> & error);

void XLDocument_saveAs(OpenXLSX::XLDocument &self, const std::string& fileName, bool forceOverwrite, std::optional<std::string> & error);

OpenXLSX::XLWorkbook XLDocument_workbook(const OpenXLSX::XLDocument &self);

bool XLDocument_isOpen(const OpenXLSX::XLDocument &self);

OpenXLSX::XLStyles & XLDocument_styles(OpenXLSX::XLDocument &self);
