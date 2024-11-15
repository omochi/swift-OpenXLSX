#include "SXLException.hpp"

std::optional<std::string> SXL_std_exception_ptr_what(const std::exception_ptr & self) {
    try {
        std::rethrow_exception(self);
    } catch (const std::exception & e) {
        return e.what();
    } catch (...) {
        return std::nullopt;
    }
}
