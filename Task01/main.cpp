/*
Тема: псевдоніми
1.	Створити псевдонім на вказівник на функцію яка повертає тип void
і приймає два цілочисльні параметри. Створили вказівник завдяки цьому псевдоніму,
написати любу функцію і завдяки ньому викликати її.
*/

#include <iostream>

using namespace std;

typedef void (*t_func)(int, int);

void ShowNumber(int number1, int number2);

int main()
{
	t_func ptrFunc = ShowNumber;

	ptrFunc(67, 46);

	return 0;
}

void ShowNumber(int number1, int number2)
{
	cout << "Number 1 = " << number1 << endl;
	cout << "Number 2 = " << number2 << endl;
}