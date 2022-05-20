#include <iostream>

class Report
{
protected:
	int reportID;
	char description[100];
	char date[10];
	char time[5];

public:
	Report();
	Report(int paraReportID, char paraDescription[100], char paraDate[10], char paraTime[5]);
	void viewReport();
};