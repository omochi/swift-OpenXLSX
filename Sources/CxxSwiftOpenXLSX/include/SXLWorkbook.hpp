#pragma once

#include "./SXLCommon.hpp"

unsigned int XLWorkbook_sheetCount(const OpenXLSX::XLWorkbook &self);
OpenXLSX::XLSheet XLWorkbook_sheet(const OpenXLSX::XLWorkbook &self, uint16_t index);

std::vector<std::string> XLWorkbook_sheetNames(const OpenXLSX::XLWorkbook &self);
std::optional<OpenXLSX::XLSheet> XLWorkbook_sheet(const OpenXLSX::XLWorkbook &self, const std::string & name, std::optional<std::string> & error);

std::optional<OpenXLSX::XLWorksheet> XLWorkbook_worksheet(const OpenXLSX::XLWorkbook &self, const std::string& sheetName, std::optional<std::string> & error);

void XLWorkbook_deleteSheet(const OpenXLSX::XLWorkbook &self, const std::string & name, std::optional<std::string> & error);
void XLWorkbook_addWorksheet(const OpenXLSX::XLWorkbook &self, const std::string & name, std::optional<std::string> & error);

void XLWorkbook_cloneSheet(const OpenXLSX::XLWorkbook &self, const std::string& existingName, const std::string& newName, std::optional<std::string> & error);

std::optional<unsigned int> XLWorkbook_indexOfSheet(const OpenXLSX::XLWorkbook &self, const std::string& sheetName, std::optional<std::string> & error);
void XLWorkbook_setSheetIndex(const OpenXLSX::XLWorkbook &self, const std::string& sheetName, unsigned int index, std::optional<std::string> & error);

