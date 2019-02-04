//Creator: Katya Morgunova, K11

#pragma once

//standart greenhouse
class Greenhouse
{
public:
	Greenhouse();
	virtual int Increment1(); //функц≥€, €ка реал≥зуЇ зм≥ну вологост≥ та температури за одину одиницю часу
	bool get_Window()const; //повертаЇ стан в≥кна
	bool get_Heater()const; //повертаЇ стан об≥гр≥вача
	virtual bool OpenWindow(); //в≥дкриваЇ в≥кно, €кщо воно закрите ≥ теплиц€ працюЇ
	virtual bool CloseWindow(); //закриваЇ в≥кно, €кщо воно в≥дкрите ≥ теплиц€ працюЇ
	virtual bool OnHeater(); //вмикаЇ об≥гр≥вач, €кщо в≥н вимкнений ≥ теплиц€ працюЇ
	virtual bool OffHeater(); //вимикаЇ об≥гр≥вач, €кщо в≥н ув≥мкнений ≥ теплиц€ працюЇ
	int getTemp()const; //повертаЇ значенн€ температури
	int getHum()const; //повертаЇ значенн€ вологост≥
	int getTime()const; //повертаЇ значенн€ часу
	std::string info()const; //повертаЇ статус теплиц≥
	virtual std::string ModelOfGreenhouse()const;//≥нформац≥€ про модель теплиц≥
	bool get_isOk()const; //повертаЇ стан теплиц≥
	~Greenhouse() = default;

protected:
	virtual int highestTemp()const; //максимальна температура, при €к≥й працюЇ теплиц€
	virtual int highestHum()const; //максимальна волог≥сть, при €к≥й пацюЇ теплиц€
	virtual int lowerTemp()const; //м≥н≥мальна температура, при €к≥й працюЇ теплиц€
	virtual int lowerHum()const; //м≥н≥мальна волог≥сть, при €к≥й пацюЇ теплиц€
	virtual int factoryTemp()const; //заводська температура
	virtual int factoryHum()const; //заводська волог≥сть
	int Temperature; //температурра
	int Humidity; //волог≥сть
	int Time; //час
	bool Window; //в≥кно
	bool Heater; //об≥гр≥вач
	bool isOk; //стан теплиц≥, ознака, чи працюЇ вона

	virtual bool isValid(); //перев≥р€Ї допустим≥сть значень температури та вологост≥ дл€ подальшоњ роботи теплиц≥, вимикаЇ об≥гр≥вач, €кщо теплиц€ зламана

};

//tropical greenhouse
class Greenhouse1: public Greenhouse
{
public:
	Greenhouse1();
	virtual int Increment1();
	virtual std::string ModelOfGreenhouse()const;

private:
	virtual int highestTemp()const;
	virtual int highestHum()const;
	virtual int lowerTemp()const;
	virtual int lowerHum()const;
	virtual int factoryTemp()const;
	virtual int factoryHum()const;
};

//arctic greenhouse
class Greenhouse2 : public Greenhouse
{
public:
	Greenhouse2();
	virtual int Increment1();
	virtual std::string ModelOfGreenhouse()const;

private:
	virtual int highestTemp()const;
	virtual int highestHum()const;
	virtual int lowerTemp()const;
	virtual int lowerHum()const;
	virtual int factoryTemp()const;
	virtual int factoryHum()const;
};