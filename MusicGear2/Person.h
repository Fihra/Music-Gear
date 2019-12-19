#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class Person
{
private:
	//string name;
	string name;
public:
	//constructor
	Person();
	~Person();
	void SetName(string n);
	string GetName();

	
};

#endif