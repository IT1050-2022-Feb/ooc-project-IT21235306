#include <iostream>

#include <cstring>
#include "DebitCard.h"

DebitCard::DebitCard() {}
DebitCard::DebitCard(int CardNumber, char Type[10], char ExpDate[10], int payid, char paymethod[20], double Advance, double TotAmount)
{
	CardNumber = cardNumber;
	strcpy(type, Type);
	strcpy(expDate, ExpDate);
	strcpy(payMethod, paymethod);
	advance = Advance;
	totAmount = TotAmount;
}
void DebitCard::paymentValidattion()
{
}
void DebitCard::makeTransaction()
{
}
