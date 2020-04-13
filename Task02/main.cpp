/*
2.	Створити перечислення «День» із 7 константами. Написати функцію, GetDay,
яка приймає число типу int і повертає перечислення типу Day. Написати
функцію RandomNumberDay, яка рандомить число від 1 до 7 і повертає його.
Створити в main змінну цього перечислення, задати їй значення рандомне
(завдяки цим двом функціям). Написати функцію, яка приймає це перечислення,
аналізує його і виводить на екран відповідний день. Написати програму, яка
рандомить 5 днів і виводить на екран, що це за дні.
*/

#include <iostream>
#include <ctime>

using namespace std;

#define BORDER_RANDOM 7

enum class Day
{
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY,
	SUNDAY,
	NODAY
};

int RandomNumberDay();
Day GetDay(int numberDay);
void ShowMyDay(const Day& myDay);

int main()
{
	srand(unsigned(time(nullptr)));

	Day myDay;

	for (size_t i = 0; i < 5; i++)
	{
		myDay = GetDay(RandomNumberDay());
		ShowMyDay(myDay);
	}

	system("pause");
	return 0;
}

int RandomNumberDay()
{
	return rand() % BORDER_RANDOM;
}

Day GetDay(int numberDay)
{
	if (numberDay >= int(Day::MONDAY) && numberDay <= int(Day::SUNDAY))
		return Day(numberDay);
	else
		return Day::NODAY;
}

void ShowMyDay(const Day& myDay)
{
	switch (myDay)
	{
	case Day::MONDAY:		cout << "Monday\n";		break;
	case Day::TUESDAY:		cout << "Tuesday\n";	break;
	case Day::WEDNESDAY:	cout << "Wednesday\n";	break;
	case Day::THURSDAY:		cout << "Thursday\n";	break;
	case Day::FRIDAY:		cout << "Friday\n";		break;
	case Day::SATURDAY:		cout << "Saturday\n";	break;
	case Day::SUNDAY:		cout << "Sunday\n";		break;
	case Day::NODAY:		cout << "Noday\n";		break;
	}
}
