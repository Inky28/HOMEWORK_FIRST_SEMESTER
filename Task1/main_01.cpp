/*
1. Створити функцію, яка приймає два числа і повертає більше з них.
*/
#include <iostream>

using namespace std;

int GetBigNum(int numb1, int numb2);

int main()
{
	GetBigNum(43, 24);

	return 0;
}

int GetBigNum(int numb1, int numb2)
{
	if (numb1 > numb2)
	{
		cout << "Big number - " << numb1 << endl;
	}
	else
	{
		cout << "Big number - " << numb2 << endl;
	}
	cout << endl;

	return numb1;
}