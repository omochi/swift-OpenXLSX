#include "SXLColumn.hpp"

using namespace OpenXLSX;

float XLColumn_width(const XLColumn & self) noexcept {
    return self.width();
}

void XLColumn_setWidth(const XLColumn & self, float width) noexcept {
    const_cast<XLColumn &>(self).setWidth(width);
}

size_t XLColumn_format(const XLColumn & self) noexcept {
    return self.format();
}

bool XLColumn_setFormat(const XLColumn & self, size_t cellFormatIndex) noexcept {
    return const_cast<XLColumn &>(self).setFormat(cellFormatIndex);
}
