#include "SXLFormula.hpp"

using namespace OpenXLSX;

OpenXLSX::XLFormula XLFormula_init(const std::string & string) {
    return XLFormula(string);
}
