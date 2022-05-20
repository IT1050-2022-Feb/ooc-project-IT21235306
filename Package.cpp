#include <iostream>
#include <cstring>

#include "Package.h"

Package::Package() {}

Package::Package(int packgID, char packgLocaion[20], double packgPrice, char packgDescription[700])

{
	packageID = packgID;
	packagePrice = packgPrice;
	strcpy(packageLocaion, packgLocaion);
	strcpy(packageDescription, packgDescription);
}
void Package::managePackage() {}

void Package::displayPackage() {}

void Package::addItemToPackage() {}

void Package::addFood()
{
	foods = new Food();
}