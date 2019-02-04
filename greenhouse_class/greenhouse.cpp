//Creator: Katya Morgunova, K11

#include <iostream>
#include <iomanip>
#include <string>
#include "greenhouse.h"

using namespace std;

//for standart greenhouse

int Greenhouse::highestTemp()const
{
	return 45;
}

int Greenhouse::highestHum()const
{
	return 75;
}

int Greenhouse::lowerTemp()const
{
	return 5;
}

int Greenhouse::lowerHum()const
{
	return 35;
}

int Greenhouse::factoryTemp()const
{
	return 20;
}

int Greenhouse::factoryHum()const
{
	return 55;
}

Greenhouse::Greenhouse() :Temperature(factoryTemp()), Humidity(factoryHum()), Time(0), Window(false), Heater(false), isOk(true)
{ isValid(); }

int Greenhouse::getTime()const
{
	return Time;
}

int Greenhouse::getHum()const
{
	return Humidity;
}

int Greenhouse::getTemp()const
{
	return Temperature;
}

bool Greenhouse::get_Window()const
{
	return Window;
}

bool Greenhouse::get_Heater()const
{
	return Heater;
}

bool Greenhouse::get_isOk()const
{
	return isOk;
}

int Greenhouse::Increment1()
{
	if (isOk)
	{
		if (Heater) { Humidity -= 1; Temperature += 2; }
		if (Window) { Humidity += 2; Temperature -= 1; }
		if (!Heater && !Window) { Humidity += 1; Temperature += 1; }
		Time += 1;
	}
	else Time += 1;
	isValid();
	return 1;
}

bool Greenhouse::OpenWindow()
{
	if (Window || !isOk) return 0;
	else {
		Window = 1;
		return 1;
	}
}

bool Greenhouse::CloseWindow()
{
	if (!Window || !isOk) return 0;
	else {
		Window = 0;
		return 1;
	}
}

 bool Greenhouse::OnHeater()
 {
	 if (Heater || !isOk) return 0;
	 else {
		 Heater = 1;
		 return 1;
	 }
 }

 bool Greenhouse::OffHeater()
 {
	 if (!Heater || !isOk) return 0;
	 else {
		 Heater = 0;
		 return 1;
	 }
 }

bool Greenhouse::isValid()
{
	if ((Humidity <= highestHum()) && (Humidity >= lowerHum()) && (Temperature <= highestTemp()) && (Temperature >= lowerTemp()) && isOk)
		return 1;
	else
	{
		Heater = false;
		isOk = false;
		return 0;
	}
}

string Greenhouse::info()const
{
	std::string Status = "\n______________________________________________\n";

	Status += "\nInformation about greenhouse\n";
	Status += ModelOfGreenhouse();
	if (isOk) Status += "Greenhouse is OK\n";
	else Status += "__!!!Greenhouse is broken!!!__\n";

	if (Window) Status += "Window is opened\n";
	else Status += "Window is closed\n";

	if (Heater) Status += "Heater is on\n";
	else Status += "Heater is off\n";

	Status += "Temperature is " + std::to_string(getTemp()) + " C\n";
	Status += "Humidity is " + std::to_string(getHum()) + " %";

	Status += "\n______________________________________________";

	return Status;
}

string Greenhouse::ModelOfGreenhouse()const
{
	std::string info;
	info = "This is a standard greenhouse\n";
	return info;
}

//for tropical greenhouse

int Greenhouse1::highestTemp()const
{
	return 65;
}

int Greenhouse1::highestHum()const
{
	return 90;
}

int Greenhouse1::lowerTemp()const
{
	return 20;
}

int Greenhouse1::lowerHum()const
{
	return 45;
}

int Greenhouse1::factoryTemp()const
{
	return 40;
}

int Greenhouse1::factoryHum()const
{
	return 65;
}

Greenhouse1::Greenhouse1()
{
	Temperature = factoryTemp();
	Humidity = factoryHum();
	isValid();
}

string Greenhouse1::ModelOfGreenhouse()const
{
	std::string info;
	info = "This is greenhouse for tropical plants\n";
	return info;
}

int Greenhouse1::Increment1()
{
	if (isOk)
	{
		if (Heater) { Humidity -= 3.5; Temperature += 4; }
		if (Window) { Humidity += 4; Temperature -= 3.5; }
		if (!Heater && !Window) { Humidity += 2; Temperature -= 0.5; }
		Time += 1;
	}
	isValid();
	return 1;
}

//for arctic greenhouse

int Greenhouse2::highestTemp()const
{
	return 20;
}

int Greenhouse2::highestHum()const
{
	return 40;
}

int Greenhouse2::lowerTemp()const
{
	return 0;
}

int Greenhouse2::lowerHum()const
{
	return 5;
}

int Greenhouse2::factoryTemp()const
{
	return 11;
}

int Greenhouse2::factoryHum()const
{
	return 20;
}

Greenhouse2::Greenhouse2() 
{
	Temperature = factoryTemp();
	Humidity = factoryHum();
	isValid();
}

string Greenhouse2::ModelOfGreenhouse()const
{
	std::string info;
	info = "This is greenhouse for arctic plants\n";
	return info;
}

int Greenhouse2::Increment1()
{
	if (isOk)
	{
		if (Heater) { Humidity -= 2; Temperature += 1; }
		if (Window) { Humidity += 3; Temperature -= 2; }
		if (!Heater && !Window) { Humidity += 1; Temperature += 1; }
		Time += 1;
	}
	isValid();
	return 1;
}