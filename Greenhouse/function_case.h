//Creator: Katya Morgunova, K11

#pragma once
#include "greenhouse.h"

//������ �������� ��
void message(); 
//���� �� �� ��������� case
void SelectTheOption(int my_choice, Greenhouse&, bool& exit); 
//������ �������� ������ ����������� � ���� �� �������� ���������� �����
void InputValidation(int& my_choice); 
//������� ������ ��������(����, ���� �������� ����������, �� ������� ������ ������� 䳿 ����, 
//���� ���������� �� ������ ����� � ��������)
void work(Greenhouse&);