#include <iostream>
#include <cstring>

#include "CustomerCareRepresentative.h"

CustomerCareRepresentative::CustomerCareRepresentative() {}

CustomerCareRepresentative::CustomerCareRepresentative(int paraAdminID, char paraAdminName[100], char paraAdminTel[10], char paraAdminEmail[100])
{
    adminID = paraAdminID;
    strcpy(adminName, paraAdminName);
    strcpy(adminTel, paraAdminName);
    strcpy(adminEmail, paraAdminEmail);
}

void CustomerCareRepresentative::viewInquiry() {}

void CustomerCareRepresentative::callCustomer() {}

void CustomerCareRepresentative::maintainReport() {}

void CustomerCareRepresentative::addReports()
{
    reports[0] = new Report();
    reports[1] = new Report();
}