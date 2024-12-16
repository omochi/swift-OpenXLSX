#include "SXLSheet.hpp"

using namespace OpenXLSX;

bool XLSheet_isWorksheet(const OpenXLSX::XLSheet &self) {
    return self.isType<XLWorksheet>();
}

bool XLSheet_isChartsheet(const OpenXLSX::XLSheet &self) {
    return self.isType<XLChartsheet>();
}

OpenXLSX::XLWorksheet XLSheet_getWorksheet(const OpenXLSX::XLSheet &self) {
    return self.get<XLWorksheet>();
}

OpenXLSX::XLChartsheet XLSheet_getChartsheet(const OpenXLSX::XLSheet &self) {
    return self.get<XLChartsheet>();
}
