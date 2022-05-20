#include <iostream>
#include <cstring>

#include "AdminReport.h"

AdminReport::AdminReport() {}

AdminReport::AdminReport(int paraReportID, char paraDescription[100], char paraDate[10], char paraTime[5])
{
    reportID = paraReportID;
    strcpy(description, paraDescription);
    strcpy(date, paraDate);
    strcpy(time, paraTime);
}