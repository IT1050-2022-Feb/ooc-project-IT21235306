#include <iostream>

#include "Reservation.h"

class Payment
{
protected:
	int payID;
	char payMethod[20];
	double advance;
	double totAmount;

	Reservation * reservations;

public:
	Payment();
	Payment(int payid, char paymethod[20], double Advance, double TotAmount);

	void makePaymentInfo();
	void setDiscount();
	void getPayment();
	void displayRecipt();
	void PaymentInfo();
}
