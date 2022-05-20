#include <iostream>
#include <cstring>

#include "GuestCustomer.h"

GuestCustomer::GuestCustomer() {}

GuestCustomer::GuestCustomer(int paraGuesCusID, char paraGuesEmail[100], char paraGuesCusTel[10], char paraGuesCusName[100])
{
    guesCusID = paraGuesCusID;
    strcpy(guesEmail, paraGuesEmail);
    strcpy(guesCusTel, paraGuesCusTel);
    strcpy(guesCusName, paraGuesCusName);
}

void GuestCustomer::viewPackage() {}

void GuestCustomer::viewContactUs() {}