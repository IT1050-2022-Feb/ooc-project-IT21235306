#include <iostream>

#include "Payment.h"
#include "Admin.h"
#include "RegisterCustomer.h"
#include "Package.h"

class Reservation
{
protected:
	int resID;
	char packageDetails[700];
	char resDate[10];
	char TimeSlot[10];
	double totalPrice;

	Payment *payments;
	Admin *admins;
	RegisterCustomer *registerCustomers;
	Package *packages;

public:
	Reservation();
	Reservation(int resid, char PackageDetails[700], char ResDate[10], char timeSlot[10], double TotalPrice);

	void displayResinfo();
	void addPackages();
};
