/*3.Написати функцію, яка приймає число і повертає суму його цифр
(прекрасний приклад на перевагу рекурсії рекурсії).*/

#include <iostream>

using namespace std;

int SumNumber(int number, int sum = 0);

int main()
{
	int number = 534568;

	cout << "Sum number = " << SumNumber(number) << endl;

	return 0;
}

int SumNumber(int number, int sum)
{
	if (number <= 0)
	{
		return sum;
	}
	sum += number % 10;
	SumNumber(number / 10, sum);
}