#include "SXLCellFormats.hpp"

using namespace OpenXLSX;

size_t XLCellFormats_count(const OpenXLSX::XLCellFormats * self) {
    return self->count();
}

OpenXLSX::XLCellFormat XLCellFormats_cellFormatByIndex(const OpenXLSX::XLCellFormats * self, size_t index) {
    return self->cellFormatByIndex(index);
}

size_t XLCellFormats_create(const OpenXLSX::XLCellFormats * self) {
    return const_cast<XLCellFormats *>(self)->create();
}
