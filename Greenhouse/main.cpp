//Creator: Katya Morgunova, K11

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include "function_case.h"
#include "greenhouse.h"
#include "copyright.h"
#include "ChooseGreenhouse.h"

using namespace std;

int main()
{
	information(); //copyright
	cout << "\t\tRealization of the Greenhouse";

	try
	{
		Greenhouse* gh = CreateGreenhouse();
		work(*gh);
		delete gh;
	}
	catch (bad_alloc) { cout << "Something wrong! I\'m sorry(\n "; system("pause"); return 0; }

	system("pause");
	return 0;
}