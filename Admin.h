#include <iostream>
#define SIZE1 2
#define SIZE2 10

#include "Report.h"
#include "Reservation.h"

class Admin
{
protected:
    int adminID;
    char adminName[100];
    char adminTel[10];
    char adminEmail[100];

    Report *reports[SIZE1];
    Reservation *reservations[SIZE2];

public:
    Admin();
    Admin(int paraAdminID, char paraAdminName[100], char paraAdminTel[10], char paraAdminEmail[100]);
    void viewReservation();
    void viewPayment();
    void createPackages();
    void addReports();
};