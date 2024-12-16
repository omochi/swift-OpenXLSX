#include "SXLColumn.hpp"

using namespace OpenXLSX;

float XLColumn_width(const XLColumn & self) {
    return self.width();
}

void XLColumn_setWidth(const XLColumn & self, float width) {
    const_cast<XLColumn &>(self).setWidth(width);
}
