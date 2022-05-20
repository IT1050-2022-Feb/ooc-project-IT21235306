#include <iostream>

#define SIZE1 10
#define SIZE2 10
#define SIZE3 10

#include "GuestCustomer.h"
#include "Package.h"
#include "Reservation.h"
#include "Inquiry.h"

class RegisterCustomer : public GuestCustomer
{
private:
    char regCusNIC[15];

    Package *packages[SIZE1];
    Reservation *reservations[SIZE2];
    Inquiry *inquiries[SIZE3];

public:
    RegisterCustomer();
    RegisterCustomer(char paraReCusNIC[15], int paraGuesCusID, char paraGuesEmail[100], char paraGuesCusTel[10], char paraGuesCusName[100]);
    void reservePackage();
    void viewPackage();
    void customizePackage();
    void viewContactUs();
    void makePayment();
    void getDiscount();
}