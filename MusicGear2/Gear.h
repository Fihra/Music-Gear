#pragma once
#ifndef GEAR_H
#define GEAR_H
#include <iostream>
using namespace std;
class Gear
{
private:
	string name;
	int price;
	string type;
public:
	Gear(string gName, int gPrice, string gType);
	void ShowGearInfo();
	~Gear();
};

#endif
