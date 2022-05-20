#include <iostream>

#include <cstring>
#include "Payment.h"

Reservation::Reservation() {}
Reservation::Reservation(int resid, char PackageDetails[700], char ResDate[10], char timeSlot[10], double TotalPrice)
{
	resID = resid;
	strcpy(packageDetails, PackageDetails);
	strcpy(resDate, ResDate);
	strcpy(TimeSlot, timeSlot);
	totalPrice = TotalPrice;
}
void Reservation::displayResinfo()
{
}
void Reservation::addPackages()
{
	packages = new Package();
}
