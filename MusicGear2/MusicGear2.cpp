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

string GearTypeSelection()
{
	int gearInput;

	string gearChoices[6] = {
		"Instrument", "Amplifier", "Hardware", "Software", "Book", "Accessory"
	};
		

	cout << "Type of gear: " << endl;
	//for (size_t i = 0; i < gearChoices->size(); i++)
	//{
	//	cout << i + 1 << ") " << gearChoices[i] << endl;
	//}
	int count = 1;
	for (string gC : gearChoices)
	{
		cout << count << ") " << gC << endl;
		count++;
	}
	cout << "Enter choice: ";
	cin >> gearInput;

	return gearChoices[gearInput -1];

	//cout << "1) Instrument" << endl;
	//cout << "2) Amplifier" << endl;
	//cout << "3) Hardware" << endl;
	//cout << "4) Software" << endl;
	//cout << "5) Book" << endl;
	//cout << "6) Accessory" << endl;
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
	string gearChoice;
	cout << "Add new gear Form" << endl;
	cin.ignore();
	cout << "Name of Gear: ";
	getline(cin, gearName);

	cout << "How much did it cost: ";
	cin >> cost;
	cin.ignore();
	gearChoice = GearTypeSelection();
	//getline(cin, gearType);
	//cin >> gearChoice;


	Gear *newItem = new Gear(gearName, cost, gearChoice);
	myGear->push_back(*newItem);
	cout << myGear->size();
}

void QueryMenu()
{
	cout << "Query Menu" << endl;
	cout << "1) Total amount spent" << endl;
	cout << "2) Show by Type" << endl;
	cout << "3) Show Alphabetical" << endl;
	cout << "4) Show Most expensive to cheapest" << endl;
	cout << "5) Back" << endl;
}

void QueryGear(vector<Gear> *myGear)
{

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
				QueryGear(&myGear);
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