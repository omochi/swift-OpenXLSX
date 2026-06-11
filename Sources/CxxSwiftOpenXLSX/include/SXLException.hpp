#pragma once

#include "./SXLCommon.hpp"

bool SXL_std_exception_ptr_castToBool(const std::exception_ptr & self);
std::optional<std::string> SXL_std_exception_ptr_what(const std::exception_ptr & self);
