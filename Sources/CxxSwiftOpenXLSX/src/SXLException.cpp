#include "SXLException.hpp"

bool SXL_std_exception_ptr_castToBool(const std::exception_ptr & self) {
    return static_cast<bool>(self);
}

std::optional<std::string> SXL_std_exception_ptr_what(const std::exception_ptr & self) {
    try {
        std::rethrow_exception(self);
    } catch (const std::exception & e) {
        return e.what();
    } catch (...) {
        return std::nullopt;
    }
}
