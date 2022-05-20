#include <iostream>
#include <cstring>

#include "Admin.h"

Admin::Admin() {}

Admin::Admin(int paraAdminID, char paraAdminName[100], char paraAdminTel[10], char paraAdminEmail[100])
{
    adminID = paraAdminID;
    strcpy(adminName, paraAdminName);
    strcpy(adminTel, paraAdminName);
    strcpy(adminEmail, paraAdminEmail);
}

void Admin::viewReservation() {}

void Admin::viewPayment() {}

void Admin::createPackages() {}

void Admin::addReports()
{
    reports[0] = new Report();
    reports[1] = new Report();
}
