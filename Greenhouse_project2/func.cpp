//Creator: Katya Morgunova, K11

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include "greenhouse.h"
#include "ChooseGreenhouse.h"
#include "copyright.h"

using namespace std;

void work(Greenhouse& gh)
{
	cout << "\n" << gh.info() << endl;
	cout << "\n";
	while (gh.get_isOk())
	{
		gh.Increment1();
		cout << gh.info() << endl;
	}
	cout << "\nOn NO!! Greenhouse is broken!\n";
	cout << "Greenhouse was working for " << gh.getTime() << " hours before it has broken\n";
}