#include "SXLStyles.hpp"

using namespace OpenXLSX;

OpenXLSX::XLNumberFormats & XLStyles_numberFormats(const OpenXLSX::XLStyles & self) {
    return self.numberFormats();
}

OpenXLSX::XLCellFormats & XLStyles_cellFormats(const OpenXLSX::XLStyles & self) {
    return self.cellFormats();
}
