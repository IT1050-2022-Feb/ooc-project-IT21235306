#include <iostream>
#include <cstring>
#include "Food.h"

Food::Food() {}

Food::Food(int blufoodID, char blufoodName[30])
{
	foodID = blufoodID;
	strcpy(foodName, blufoodName);
}

void Food::deleteItem();

void Food::addItems();