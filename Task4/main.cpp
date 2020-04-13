/*Тема: шаблони функцій
4.Написати функцію, яка приймає два шаблонних параметра і повертає їх суму.
Перевірити її на значеннях, які введе користувач (спочатку 2 цілих числа, потім два дробових).
*/

#include <iostream>

using namespace std;

template <typename Test>
Test SumTest(Test first, Test second)
{
	return first + second;
}

template <typename T>
T Sum(T first, T second)
{
	return first + second;
}

int main()
{
	cout << SumTest(6, 10) << endl;

	float number1, number2;
	int number3, number4;

	cout << "Enter float type number\n";
	cin >> number1 >> number2;

	cout << "Sum float type = " << Sum(number1, number2) << "\n\n";

	cout << "Enter int type number\n";
	cin >> number3 >> number4;

	cout << "Sum int type = " << Sum(number3, number4) << endl;

	return 0;
}