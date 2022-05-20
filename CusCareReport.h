#include <iostream>

#include "Report.h"

class CusCareReport : public Report
{
public:
    CusCareReport();
    CusCareReport(int paraReportID, char paraDescription[100], char paraDate[10], char paraTime[5]);
};