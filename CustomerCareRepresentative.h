#include <iostream>
#define SIZE1 2
#define SIZE2 10

#include "Admin.h"
#include "Report.h"
#include "Inquiry.h"

class CustomerCareRepresentative : public Admin
{
private:
    Report *reports[SIZE1];
    Inquiry *Inquiries[SIZE2];

public:
    CustomerCareRepresentative();
    CustomerCareRepresentative(int paraAdminID, char paraAdminName[100], char paraAdminTel[10], char paraAdminEmail[100]);
    void viewInquiry();
    void callCustomer();
    void maintainReport();
    void addReports();
};