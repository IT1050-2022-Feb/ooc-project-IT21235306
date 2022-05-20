#include <iostream>

#include "CustomerCareRepresentative.h"
#include "GuestCustomer.h"
#include "RegisterCustomer.h"

class Inquiry {
private:
  int inquiryID;

  GuestCustomer *guescus;
  RegisterCustomer *regecus;
  CustomerCareRepresentative *cuscare;

public:
  Inquiry();
  Inquiry(int bluinquryID);
  void getInquiry();
  void displayInquiry();
};