#include <iostream>

class Food
{
private:
	int foodID;
	char foodName[30];

public:
	Food();
	Food(int blufoodID, char blufoodName[30]);
	void deleteItem();
	void addItem();
};