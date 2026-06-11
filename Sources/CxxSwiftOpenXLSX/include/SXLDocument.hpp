#pragma once

#include "./SXLCommon.hpp"

OpenXLSX::XLDocument * XLDocument_new() noexcept;

void XLDocument_delete(OpenXLSX::XLDocument *self) noexcept;

void XLDocument_suppressWarnings(OpenXLSX::XLDocument &self) noexcept;

void XLDocument_open(OpenXLSX::XLDocument &self, const std::string &docPath, std::exception_ptr & error) noexcept;

void XLDocument_create(OpenXLSX::XLDocument &self, const std::string& fileName, bool forceOverwrite, std::exception_ptr & error) noexcept;

void XLDocument_save(OpenXLSX::XLDocument &self, std::exception_ptr & error) noexcept;

void XLDocument_saveAs(OpenXLSX::XLDocument &self, const std::string& fileName, bool forceOverwrite, std::exception_ptr & error) noexcept;

OpenXLSX::XLWorkbook XLDocument_workbook(const OpenXLSX::XLDocument &self) noexcept;

bool XLDocument_isOpen(const OpenXLSX::XLDocument &self) noexcept;

OpenXLSX::XLStyles & XLDocument_styles(OpenXLSX::XLDocument &self) noexcept;
