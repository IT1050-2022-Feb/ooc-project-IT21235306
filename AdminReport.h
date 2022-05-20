#include <iostream>

#include "Report.h"

class AdminReport : public Report
{
public:
    AdminReport();
    AdminReport(int paraReportID, char paraDescription[100], char paraDate[10], char paraTime[5]);
};