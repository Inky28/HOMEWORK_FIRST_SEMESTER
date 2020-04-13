/*2.Напишіть функцію, яка приймає 2 числа і повертає їх найбільший спільний дільник.*/

#include <iostream>

using namespace std;

template<typename T>
T ShowLargestDivisor(T first, T second);

int main()
{
	int number1 = 125;
	int number2 = 50;

	if (ShowLargestDivisor(number1, number2) == 0)
	{
		cout << "Error\n";
	}
	else
	{
		cout << "Largest divisor = " << ShowLargestDivisor(number1, number2) << endl;
	}

	return 0;
}

template<typename T>
T ShowLargestDivisor(T first, T second)
{
	if (first <= 0 || second <= 0)
	{
		return 0;
	}
	if (first == second)
	{
		return first;
	}
	if (first > second)
	{
		T temp = first;
		first = second;
		second = temp;
	}
	ShowLargestDivisor(first, second - first);
}