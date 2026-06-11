#include "SXLNumberFormats.hpp"

using namespace OpenXLSX;

size_t XLNumberFormats_count(const OpenXLSX::XLNumberFormats * self) noexcept {
    return self->count();
}

OpenXLSX::XLNumberFormat XLNumberFormats_numberFormatByIndex(const OpenXLSX::XLNumberFormats * self, OpenXLSX::XLStyleIndex index) noexcept {
    return self->numberFormatByIndex(index);
}

OpenXLSX::XLStyleIndex XLNumberFormats_create(const OpenXLSX::XLNumberFormats * self) noexcept {
    return const_cast<XLNumberFormats *>(self)->create();
}
