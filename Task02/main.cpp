/*Є число 0000 0000. Попросіть в користувача ввести номер біта, який треба включити.
Включіть його і виведіть на екран нове значення.*/
#include <iostream>

using namespace std;

void ShowBinaryNumber(int number);

int main()
{
	int number = 0b0;
	int bite = 0b1;
	int key;

	ShowBinaryNumber(number);
	cout << "Enter number of bit (1-8): ";

	do
		cin >> key;
	while (key <= 0 || key > 8);

	number |= (bite << (key - 1));

	ShowBinaryNumber(number);

	return 0;
}

void ShowBinaryNumber(int number)
{
	int bite = 0b10000000;
	for (size_t i = 0; i < 8; i++)
	{
		cout << ((number & bite) == bite ? 1 : 0);
		bite >>= 1;
	}
	cout << endl;
}