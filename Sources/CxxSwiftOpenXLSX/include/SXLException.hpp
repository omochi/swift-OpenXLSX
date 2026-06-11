#pragma once

#include "./SXLCommon.hpp"

bool SXL_std_exception_ptr_boolValue(const std::exception_ptr & self) noexcept;
std::optional<std::string> SXL_std_exception_ptr_typeName(const std::exception_ptr & self) noexcept;
std::optional<std::string> SXL_std_exception_ptr_what(const std::exception_ptr & self) noexcept;
