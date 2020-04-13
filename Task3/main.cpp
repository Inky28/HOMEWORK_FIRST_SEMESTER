/*Тема: перезавантаження функцій
3.Написати функцію, яка приймає одне дробове число і виводить його на екран.
Перезавантажити її так, щоб вона приймала ще й дробове число і кількість цифр.
Другий параметр вказує, скільки цифр після коми треба вивести.
Для полегшення задачі можете не добавляти округлення числа, а просто відкидати лишні цифри.*/

#include <iostream>

using namespace std;

void Show(double number);
void Show(double number, int number2);

int main()
{
	const double PI = 3.1415;

	Show(PI);
	Show(PI, 2);
	Show(PI, 0);
	Show(PI, -3);
	Show(PI, 6);
	Show(PI, 10);

	return 0;
}

void Show(double number)
{
	cout << number << endl;
}
void Show(double number, int number2)
{
	if (number2 == 0)
	{
		cout << (int)number % 10 << endl;
		return;
	}
	else if (number2 < 0)
	{
		cout << "Error. Number < zero\n";
		return;
	}
	cout << (int)number % 10 << "." << (int)((number - (int)number % 10) * pow(10, number2)) << endl;
}