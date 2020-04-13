/* Створіть структуру Time, яка має 3 бітових поля. Кожне поле відповідає за години, хвилини і секунди.
Кількість бітів визначте самі.
Напишіть програму, в якій користувач вводитиме час в ці поля і на екрані він відображатиметься відповідно.*/
#include <iostream>

using namespace std;

#define TIME_MAX_HOURS 23
#define TIME_MAX_SECOND_MINUTES 59

struct Time
{
	unsigned hours : 5;
	unsigned minutes : 6;
	unsigned seconds : 6;
};

int EnterData(unsigned& number, int time);

int main()
{
	Time time;
	unsigned number;

	cout << "Enter hours: ";
	cin >> number;
	time.hours = EnterData(number, TIME_MAX_HOURS);

	cout << "Enter minutes: ";
	cin >> number;
	time.minutes = EnterData(number, TIME_MAX_SECOND_MINUTES);

	cout << "Enter seconds: ";
	cin >> number;
	time.seconds = EnterData(number, TIME_MAX_SECOND_MINUTES);

	cout << "Time: " << time.hours << ":" << time.minutes << ":" << time.seconds << endl;

	return 0;
}

int EnterData(unsigned& number, int time)
{
	if (number <= time)
		return number;

	do
	{
		cout << "Enter other time: ";
		cin >> number;
	} while (number > time);

	return number;
}