//Creator: Katya Morgunova, K11

#pragma once

//standart greenhouse
class Greenhouse
{
public:
	Greenhouse();
	virtual int Increment1(); //�������, ��� ������ ���� �������� �� ����������� �� ����� ������� ����
	bool get_Window()const; //������� ���� ����
	bool get_Heater()const; //������� ���� ��������
	virtual bool OpenWindow(); //������� ����, ���� ���� ������� � ������� ������
	virtual bool CloseWindow(); //������� ����, ���� ���� ������� � ������� ������
	virtual bool OnHeater(); //����� �������, ���� �� ��������� � ������� ������
	virtual bool OffHeater(); //������ �������, ���� �� ��������� � ������� ������
	int getTemp()const; //������� �������� �����������
	int getHum()const; //������� �������� ��������
	int getTime()const; //������� �������� ����
	std::string info()const; //������� ������ �������
	virtual std::string ModelOfGreenhouse()const;//���������� ��� ������ �������
	bool get_isOk()const; //������� ���� �������
	~Greenhouse() = default;

protected:
	virtual int highestTemp()const; //����������� �����������, ��� ��� ������ �������
	virtual int highestHum()const; //����������� ��������, ��� ��� ����� �������
	virtual int lowerTemp()const; //�������� �����������, ��� ��� ������ �������
	virtual int lowerHum()const; //�������� ��������, ��� ��� ����� �������
	virtual int factoryTemp()const; //��������� �����������
	virtual int factoryHum()const; //��������� ��������
	int Temperature; //������������
	int Humidity; //��������
	int Time; //���
	bool Window; //����
	bool Heater; //�������
	bool isOk; //���� �������, ������, �� ������ ����

	virtual bool isValid(); //�������� ����������� ������� ����������� �� �������� ��� �������� ������ �������, ������ �������, ���� ������� �������

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