/*
2.	�������� ������������ ������ �� 7 �����������. �������� �������, GetDay,
��� ������ ����� ���� int � ������� ������������ ���� Day. ��������
������� RandomNumberDay, ��� ��������� ����� �� 1 �� 7 � ������� ����.
�������� � main ����� ����� ������������, ������ �� �������� ��������
(������� ��� ���� ��������). �������� �������, ��� ������ �� ������������,
������ ���� � �������� �� ����� ��������� ����. �������� ��������, ���
��������� 5 ��� � �������� �� �����, �� �� �� ��.
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
