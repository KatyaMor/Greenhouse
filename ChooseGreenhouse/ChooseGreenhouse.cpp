//Creator: Katya Morgunova, K11

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include "greenhouse.h"
#include "ChooseGreenhouse.h"

using namespace std;

Greenhouse* CreateGreenhouse()
{
	cout << "\nYou can choose one of these three greenhouses:\n";
	cout << "Enter \'s\' to choose standart greenhouse;\n";
	cout << "Enter \'a\' to choose arctic greenhouse;\n";
	cout << "Enter \'t\' to choose tropical greenhouse;\n";

	char choice;
	cin >> choice;
	
	switch (choice)
	{
	case 's': return new Greenhouse(); break;
	case 'a': return new Greenhouse2(); break;
	case 't': return new Greenhouse1(); break;
	default: throw (bad_alloc()); break;
	}
}