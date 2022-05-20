#include <iostream>
#include <cstring>

#include "CusCareReport.h"

CusCareReport::CusCareReport() {}

CusCareReport::CusCareReport(int paraReportID, char paraDescription[100], char paraDate[10], char paraTime[5])
{
    reportID = paraReportID;
    strcpy(description, paraDescription);
    strcpy(date, paraDate);
    strcpy(time, paraTime);
}