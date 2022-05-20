#include <iostream>
#include <cstring>

#include "Inquiry.h"

Inquiry::Inquiry (){}
	
Inquiry::Inquiry(int bluinquryID)
{
	inquiryID = bluinquryID;
}

void Inquiry::getInquiry();

void Inquiry::displayInquiry();