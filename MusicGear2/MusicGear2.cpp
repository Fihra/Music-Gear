// MusicGear2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Person.h"
#include "Gear.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void MainMenu() 
{
	cout << "Main Menu" << endl;
	cout << "1) Show your Music Gear" << endl;
	cout << "2) Add new gear" << endl;
	cout << "3) Query gears" << endl;
	cout << "4) Exit" << endl;
}

void MyGear(vector<Gear> *myGear)
{
	//vector<Gear> myGear;

	//Gear *mic = new Gear("SM57", 80, "Microphone");
	//mic->ShowGearInfo();
	//cout <<  << endl;

	//myGear.push_back(*mic);
	cout << myGear->size() << endl;


	for (Gear g : *myGear)
	{
		g.ShowGearInfo();
	}

}

void AddNewGear(vector<Gear> *myGear)
{
	string gearName;
	int cost;
	string gearType;

	cout << "Add new gear Form" << endl;
	cout << "Name of Gear: ";
	cin >> gearName;
	getline(cin, gearName);
	//cin >> gearName;
	cout << "How much did it cost: ";
	cin >> cost;
	cout << "Type of gear: ";
	cin >> gearType;
	getline(cin, gearType);

	Gear *newItem = new Gear(gearName, cost, gearType);
	myGear->push_back(*newItem);
	cout << myGear->size();
}

int main()
{
	vector<Gear> myGear;

	Person p;
	string name_input;
	string choice;
	bool isLooping = true;

    cout << "Music Gear\n"; 
	cout << "What is your name?" << endl;
	cin >> name_input;

	do 
	{
		cout << "Is " << name_input << " correct? Y/N" << endl;
		cin >> choice;

		if (choice == "y")
		{
			break;
		}
		cout << "Then what is your name?" << endl;
		cin >> name_input;
	} while (choice == "n");
	p.SetName(name_input);
	cout << "Welcome " << p.GetName() << endl;

	int menuChoice;

	while (isLooping)
	{
		MainMenu();
		cout << "Enter Choice: ";
		cin >> menuChoice;

		switch (menuChoice)
		{
			case 1:
				MyGear(&myGear);
				break;
			case 2:
				AddNewGear(&myGear);
				break;
			case 3:
				cout << "Query gear" << endl;
				break;
			case 4:
				cout << "Exiting" << endl;
				isLooping = false;
				break;
		}
	}
	
	cout << "Thank you for using the menu gear app";
	
	return 0;
}