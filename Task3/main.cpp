/*2. Створіть масив із 5 елементів, які заповнює користувач вручну (завдяки функції).

Напишіть функцію, яка приймає цей масив і розкидає його елементи в рандомні місця.

Також напишіть функцію сортування вибором.

Створіть в main меню, в якому питайте дайте користувачу наступні пункти:

1 – вивести масив на екран
2 – розкидати елементи в масиві
3 – відсортувати масив
0 – вихід. */

#include <iostream>
#include <ctime>

using namespace std;

void EnterArr(int arr[], const int SIZE);

template <typename T>
void RandArr(T arr[], const T SIZE);

void ShowArr(const int arr[], const int SIZE);

template <typename T>
void SortArr(T arr[], const T SIZE);

int main()
{
	srand(time(nullptr));

	const int SIZE = 5;
	int arr[SIZE]{};
	int number;

	cout << "Enter array\n";
	EnterArr(arr, SIZE); 
	cout << "My arr - ";
	ShowArr(arr, SIZE); 

	cout << "\tMENU\n";

	for (int count = 0; ; count++)
	{
		if (count == 0 || count == 10)
		{
			cout << "Show array - 1\n";
			cout << "Rand array - 2\n";
			cout << "Sort array - 3\n";
			cout << "EXIT - 0\n\n";
			count = 0;
		}

		cout << "Your choise - ";
		cin >> number;
		cout << endl;

		if (number == 1)
		{
			ShowArr(arr, SIZE);		//виводжу масив
		}
		else if (number == 2)
		{
			RandArr(arr, SIZE);		//рандомлю масив
		}
		else if (number == 3)
		{
			SortArr(arr, SIZE);		//сортую масив
		}
		else if (number == 0)
		{
			cout << "Bye\n";
			break;
		}
		else
		{
			cout << "Error\n";
		}
	}
	return 0;
}

void EnterArr(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
}

template <typename T>
void RandArr(T arr[], const T SIZE)
{
	T temp;
	for (T i = 0; i < SIZE; ++i)
	{
		T j = rand() % SIZE;
		if (i != j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	//cout << endl;
}

void ShowArr(const int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template <typename T>
void SortArr(T arr[], const T SIZE)
{
	for (T i = 0; i < SIZE - 1; i++)
	{
		T temp = arr[i];
		for (T j = i + 1; j < SIZE; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}