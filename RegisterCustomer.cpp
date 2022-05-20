#include <iostream>
#include <cstring>

#include "RegisterCustomer.h"

RegisterCustomer::RegisterCustomer() {}

RegisterCustomer::RegisterCustomer(char paraReCusNIC[15], int paraGuesCusID, char paraGuesEmail[100], char paraGuesCusTel[10], char paraGuesCusName[100])
{
    guesCusID = paraGuesCusID;
    strcpy(regCusNIC, paraReCusNIC);
    strcpy(guesEmail, paraGuesEmail);
    strcpy(guesCusTel, paraGuesCusTel);
    strcpy(guesCusName, paraGuesCusName);
}
void RegisterCustomer::reservePackage() {}

void RegisterCustomer::viewPackage() {}

void RegisterCustomer::customizePackage() {}

void RegisterCustomer::viewContactUs() {}

void RegisterCustomer::makePayment() {}

void RegisterCustomer::getDiscount() {}
