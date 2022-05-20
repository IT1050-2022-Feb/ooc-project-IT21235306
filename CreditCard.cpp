#include <iostream>
#include <ctring>

#include "CreditCard.h"

CreditCard::CreditCard() {}
CreditCard::CreditCard(int CardNumber, char Type[10], char ExpDate[10], int payid, char paymethod[20], double Advance, double TotAmount)
{
	CardNumber = cardNumber;
	strcpy(type, Type);
	strcpy(expDate, ExpDate);
	strcpy(payMethod, paymethod);
	advance = Advance;
	totAmount = TotAmount;
}
void CreditCard::paymentValidattion()
{
}
void CreditCard::makeTransaction()
{
}
