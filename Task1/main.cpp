/*Тема: лінійний пошук
1. Напишіть функцію лінійного пошуку, яка повертатиме кількість елементів зі значенням,
яке ввів користувач.
Якщо функція поверне 0 – елементів з таким значенням немає.
*/

#include <iostream>
#include <ctime>

using namespace std;

template <typename T>
void RandArr(T arr[], const T SIZE);

template <typename T>
void ShowArr(const T arr[], const T SIZE);

int Find(const int arr[], const int SIZE, int key);

int main()
{
	srand(time(nullptr));

	const int SIZE = 20;
	int arr[SIZE]{};

	RandArr(arr, SIZE);
	ShowArr(arr, SIZE);

	cout << "Count = " << Find(arr, SIZE, 7) << endl;

	Find(arr, SIZE, 7) != 0 ? cout << "You found\n" : cout << "You did not find\n";

	system("pause");
	return 0;
}

template <typename T>
void RandArr(T arr[], const T SIZE)
{
	for (T i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}
}

template <typename T>
void ShowArr(const T arr[], const T SIZE)
{
	for (T i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int Find(const int arr[], const int SIZE, int key)
{
	int count = 0;
	for (int i = 0; i < SIZE; i++)
	{
		key == arr[i] ? count++ : count;
	}
	return count;
}