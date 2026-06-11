#pragma once

#include "./SXLCommon.hpp"

unsigned int XLWorkbook_sheetCount(const OpenXLSX::XLWorkbook &self) noexcept;
OpenXLSX::XLSheet XLWorkbook_sheet(const OpenXLSX::XLWorkbook &self, uint16_t index) noexcept;

std::vector<std::string> XLWorkbook_sheetNames(const OpenXLSX::XLWorkbook &self) noexcept;
std::optional<OpenXLSX::XLSheet> XLWorkbook_sheet(const OpenXLSX::XLWorkbook &self, const std::string & name, std::exception_ptr & error) noexcept;

std::optional<OpenXLSX::XLWorksheet> XLWorkbook_worksheet(const OpenXLSX::XLWorkbook &self, const std::string& sheetName, std::exception_ptr & error) noexcept;

void XLWorkbook_deleteSheet(const OpenXLSX::XLWorkbook &self, const std::string & name, std::exception_ptr & error) noexcept;
void XLWorkbook_addWorksheet(const OpenXLSX::XLWorkbook &self, const std::string & name, std::exception_ptr & error) noexcept;

void XLWorkbook_cloneSheet(const OpenXLSX::XLWorkbook &self, const std::string& existingName, const std::string& newName, std::exception_ptr & error) noexcept;

std::optional<unsigned int> XLWorkbook_indexOfSheet(const OpenXLSX::XLWorkbook &self, const std::string& sheetName, std::exception_ptr & error) noexcept;
void XLWorkbook_setSheetIndex(const OpenXLSX::XLWorkbook &self, const std::string& sheetName, unsigned int index, std::exception_ptr & error) noexcept;

