/*�������� �������, ��� ������ ����� ���� unsigned
� �������� �� ����� ���� � 2-���� ������ ��������.
����������� �� ������� ���, ��� ����� ������ ����������.*/
#include <iostream>

using namespace std;

void ShowBinaryNumber(unsigned int number);

int main()
{
	unsigned int number;
	cout << "Enter number (only positive numbers): ";
	cin >> number;

	ShowBinaryNumber(number);

	return 0;
}

void ShowBinaryNumber(unsigned int number)
{
	if (number > 0)
	{
		ShowBinaryNumber(number / 2);
		cout << number % 2;
	}
}