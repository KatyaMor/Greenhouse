//Creator: Katya Morgunova, K11

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include "function_case.h"
#include "greenhouse.h"

using namespace std;

void work(Greenhouse& gh)
{
	int my_choice;
	bool exit = true;
	cout << "\n" << gh.info() << endl;
	cout << "\n";

	while (exit)
	{
		message();
		InputValidation(my_choice);
		SelectTheOption(my_choice, gh, exit);
		cout << gh.info() << endl;
		cout << "\n\n";
	}
}

void SelectTheOption(int my_choice, Greenhouse& gh, bool& exit)
{            

	switch (my_choice)
	{
	case 1: if (!gh.OpenWindow()) cout << "I can\'t open this window!(\n"; gh.OpenWindow();  break;
	case 2: if (!gh.CloseWindow()) cout << "I can\'t close this window!(\n"; gh.CloseWindow(); break;
	case 3: if (!gh.OnHeater())  cout << "I can\'t turn on this heater!(\n"; gh.OnHeater(); break;
	case 4: if (!gh.OffHeater()) cout << "I can\'t turn off this heater!(\n"; gh.OffHeater(); break;
	case 5: gh.Increment1(); break;
	case 6: message(); break;
	case 7: cout << "The work of the Greenhouse ended)\n"; exit = false; break;
	default: cout << "I don\'t understand you( Please try to input again\n"; break;
	}
}

void message()
{
	cout << "\tChoose one of these options:\n";
	cout << "Press '1' to open the window\n";
	cout << "Press '2' to close the window\n";
	cout << "Press '3' to heater on\n";
	cout << "Press '4' to heater off\n";
	cout << "Press '5' to do increment\n";
	cout << "Press '6' to show action options again\n";
	cout << "Press '7' to complete the management of the greenhouse\n";
}

void InputValidation(int& my_choice)
{
	cin >> my_choice;
	if (cin.fail())
	{
		cin.clear();
		std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
		my_choice = 0;
	}
}
