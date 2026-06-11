#include "SXLException.hpp"

#include <cstdlib>
#include <memory>
#include <typeinfo>
#include <cxxabi.h>

namespace {
    std::string typeName(const std::type_info & type) {
        int status = 0;
        std::unique_ptr<char, decltype(&std::free)> name(
            abi::__cxa_demangle(type.name(), nullptr, nullptr, &status),
            &std::free
        );

        if (status == 0 && name) {
            return name.get();
        }

        return type.name();
    }
}

bool SXL_std_exception_ptr_boolValue(const std::exception_ptr & self) noexcept {
    return static_cast<bool>(self);
}

std::optional<std::string> SXL_std_exception_ptr_typeName(const std::exception_ptr & self) noexcept {
    try {
        std::rethrow_exception(self);
    } catch (const std::exception & e) {
        return typeName(typeid(e));
    } catch (...) {
        return std::nullopt;
    }
}

std::optional<std::string> SXL_std_exception_ptr_what(const std::exception_ptr & self) noexcept {
    try {
        std::rethrow_exception(self);
    } catch (const std::exception & e) {
        return e.what();
    } catch (...) {
        return std::nullopt;
    }
}
