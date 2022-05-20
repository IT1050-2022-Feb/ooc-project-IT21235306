#include <iostream>
#include <cstring>

#include "Payment.h"

Payment::Payment() {}
Payment::Payment(int payid, char paymethod[20], double Advance, double TotAmount)
{
	payid = payID;
	strcpy(payMethod, paymethod);
	advance = Advance;
	totAmount = TotAmount;
}

void Payment::makePaymentInfo()
{
}
void Payment::setDiscount()
{
}
void Payment::getPayment()
{
}
void Payment::displayRecipt()
{
}
void Payment::PaymentInfo()
{
}
