#include <iostream>

#include "Inquiry.h"
#include "Package.h"

#define SIZE1 10
#define SIZE2 10

class GuestCustomer {
protected:
  int guesCusID;
  char guesEmail[100];
  char guesCusTel[10];
  char guesCusName[100];

  Package *packages[SIZE1];
  Inquiry *Inquiries[SIZE1];

public:
  GuestCustomer();
  GuestCustomer(int paraGuesCusID, char paraGuesEmail[100],
                char paraGuesCusTel[10], char paraGuesCusName[100]);
  void viewPackage();
  void viewContactUs();
};
