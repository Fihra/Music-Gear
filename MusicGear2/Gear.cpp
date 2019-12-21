#include "pch.h"
#include "Gear.h"

#include <iostream>
#include <string>
using namespace std;
Gear::Gear(string gName, int gPrice, string gType)
{
	name = gName;
	price = gPrice;
	type = gType;
}

void Gear::ShowGearInfo()
{
	cout << "Name: " << name << endl;
	cout << "Price: $" << price << endl;
	cout << "Type: " << type << endl;
	cout << endl;

}

Gear::~Gear()
{
}
