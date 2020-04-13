/*
2.Створити функцію, яка приймає число і повертає кількість цифр в ньому.
*/
#include <iostream>

using namespace std;

int GetCountNum(int number);

int main()
{
	GetCountNum(2435);

	return 0;
}

int GetCountNum(int number)
{
	int count = 0;

	for (; 0 < number; number /= 10)
	{
		count++;
	}
	cout << "Amount numb - " << count << endl;

	cout << endl;

	return count;
}