#include <iostream>

#include "Payment.h"

class DebitCard : public Payment
{
private:
	int cardNumber;
	char type[10];
	char expDate[10];

public:
	DebitCard();
	DebitCard(int CardNumber, char Type[10], char ExpDate[10], int payid, char paymethod[20], double Advance, double TotAmount);

	void paymentValidattion();
	void makeTransaction();
}
