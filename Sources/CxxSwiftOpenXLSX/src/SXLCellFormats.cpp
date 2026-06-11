#include "SXLCellFormats.hpp"

using namespace OpenXLSX;

size_t XLCellFormats_count(const OpenXLSX::XLCellFormats * self) noexcept {
    return self->count();
}

OpenXLSX::XLCellFormat XLCellFormats_cellFormatByIndex(const OpenXLSX::XLCellFormats * self, size_t index) noexcept {
    return self->cellFormatByIndex(index);
}

size_t XLCellFormats_create(const OpenXLSX::XLCellFormats * self) noexcept {
    return const_cast<XLCellFormats *>(self)->create();
}
