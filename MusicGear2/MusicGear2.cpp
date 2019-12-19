// MusicGear2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Person.h"
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

int main()
{
	vector<string> myList;
	

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
				cout << "Showing gear" << endl;
				break;
			case 2:
				cout << "Add new gear" << endl;
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


	myList.push_back("Guitar");
	myList.push_back("Microphone");
	myList.push_back("Focusrite");

	for (string i : myList)
	{
		cout << "i = " << i << endl;
	}

	cout << "Thank you for using the menu gear app";
	

	return 0;
}