#include <iostream>

#include "Food.h"
#include "GuestCustomer.h"
#include "RegisterCustomer.h"

class Package
{
private:
	int packageID;
	char packageLocaion[20];
	double packagePrice;
	char packageDescription[700];

	Food *foods;
	GuestCustomer *gucus;
	RegisterCustomer *recus;

public:
	Package();
	Package(int packgID, char packgLocaion[20], double packgPrice, char packgDescription[700]);
	void managePackage();
	void displayPackage();
	void addItemToPackage();
	void addFood();
};