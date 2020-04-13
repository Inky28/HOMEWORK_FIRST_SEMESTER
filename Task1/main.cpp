/*Тема: рекурсія
1.	Напишіть функцію, яка приймає масив з його розміром і число.
Вона повертає кількість співпадінь цього числа із елементами.
*/
#include <iostream>
#include <ctime>

using namespace std;

int CountMatch(int arr[], int size, int number, int counter = 0);
void Arr(int arr[], const int SIZE);
void ShowArr(const int arr[], const int SIZE);

int main()
{
	srand(time(nullptr));

	const int SIZE = 10;
	int arr[SIZE]{};

	Arr(arr, SIZE);
	ShowArr(arr, SIZE);

	cout << "Count = " << CountMatch(arr, SIZE, 5) << endl;

	return 0;
}

int CountMatch(int arr[], int size, int number, int counter = 0)
{
	int i = size - 1;

	if (i > 0)
	{
		if (arr[i] == number)
		{
			counter++;
		}
		CountMatch(arr, i, number, counter);
	}
	else
	{
		return counter;
	}
}
void Arr(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}
}
void ShowArr(const int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}