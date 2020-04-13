/*3.Створити функцію, яка приймає масив та число, яке треба в цьому масиві найти.
	Вона його в ньому шукає, і якщо находить – повертає true.Інакше false.*/

#include <iostream>

using namespace std;

bool GetArrAndNumb(int arr[], const int SIZE, int numb);

int main()
{
	const int SIZE = 11;
	int arr[SIZE]{};
	GetArrAndNumb(arr, 10, 41);

	return 0;
}

bool GetArrAndNumb(int arr[], const int SIZE, int numb)
{
	bool find;
	cout << "Array\n";
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = i * 10;
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == numb)
		{
			find = true;
			break;
		}
		else
		{
			find = false;
		}
	}

	if (find)
	{
		cout << find << " - true. Find number.\n";
	}
	else
	{
		cout << find << " - false. Can`t find number.\n";
	}

	cout << endl;

	return find;
}