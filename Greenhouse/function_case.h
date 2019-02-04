//Creator: Katya Morgunova, K11

#pragma once
#include "greenhouse.h"

//перелік можливих дій
void message(); 
//вибір дій за допомогою case
void SelectTheOption(int my_choice, Greenhouse&, bool& exit); 
//виконує введення вибору користувача в циклі та перевіряє коректність вводу
void InputValidation(int& my_choice); 
//основна робота програми(цикл, який виводить інформацію, та пропонує ввести відповідні дії тоди, 
//поки користувач не захоче вийти з програми)
void work(Greenhouse&);