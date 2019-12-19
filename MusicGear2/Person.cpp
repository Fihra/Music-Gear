#include "pch.h"
#include "Person.h"

#include <iostream>
using namespace std;

Person::Person()
{
	name = "ehh";
}

void Person::SetName(string n)
{
	name = n;
}

string Person::GetName()
{
	return name;
}


Person::~Person()
{
}
