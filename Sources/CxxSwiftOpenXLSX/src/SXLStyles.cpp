#include "SXLStyles.hpp"

using namespace OpenXLSX;

OpenXLSX::XLCellFormats & XLStyles_cellFormats(const OpenXLSX::XLStyles & self) {
    return self.cellFormats();
}
