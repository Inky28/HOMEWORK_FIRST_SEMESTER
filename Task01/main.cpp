/*Є звичайний масив на стеку із 100 елементів. Він заповнений рандомом від 0 до 100.

Створіть на кучі масив, який буде мати лише унікальні значення із першого масиву (які не повторюються).

Для цього спочатку треба знайти їх кількість (щоб створити масив)
а потім заново шукати, щоб копіювати в новий масив. Виведіть обидва масиви.*/

#include <iostream>
#include <ctime>

using namespace std;

void ShowArray(int arr[], const int SIZE);

void InitializeArr(int arr[], const int SIZE);

int FindUniqueSize(int arr[], const int SIZE);

int* NewUniqueArr(int arr[], const int SIZE, int uniqueSize);

void BubbleSort(int arr[], int size);

int main()
{
	srand(time(nullptr));

	const int SIZE = 100;
	int arr[SIZE]{};

	InitializeArr(arr, SIZE);
	cout << "My array\n";
	ShowArray(arr, SIZE);

	/*
	//Сортування для наглядності
	cout << "Sort array\n";
	BubbleSort(arr, SIZE);
	ShowArray(arr, SIZE);
	*/

	int uniqueSize = FindUniqueSize(arr, SIZE);
	int* ptrUniqueArr = NewUniqueArr(arr, SIZE, uniqueSize);

	cout << "Size unique array - " << uniqueSize << endl;

	cout << "New unique array\n";
	ShowArray(ptrUniqueArr, uniqueSize);

	delete[] ptrUniqueArr;
	ptrUniqueArr = nullptr;

	return 0;
}

void ShowArray(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void InitializeArr(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
	}
}

int FindUniqueSize(int arr[], const int SIZE)
{
	bool find = false;
	int count = 0;

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 1; j < SIZE; j++)
		{
			if (arr + i == arr + j)
			{
				continue;
			}
			if (arr[i] == arr[j])
			{
				find = false;
				break;
			}
			else // або умова if (arr[j] == arr[SIZE - 1] && arr[i] != arr[SIZE - 1])
			{
				find = true;
			}
		}
		if (find)
		{
			count++;
		}
	}
	return count;
}

int* NewUniqueArr(int arr[], const int SIZE, int uniqueSize)
{
	int* ptrUniqueArr = new int[uniqueSize];
	bool find = false;
	int indexUniqueArr = 0;

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 1; j < SIZE; j++)
		{
			if (arr + i == arr + j)
			{
				continue;
			}
			if (arr[i] == arr[j])
			{
				find = false;
				break;
			}
			else // або умова if (arr[j] == arr[SIZE - 1] && arr[i] != arr[SIZE - 1])
			{
				find = true;
			}
		}
		if (find)
		{
			ptrUniqueArr[indexUniqueArr] = arr[i];
			indexUniqueArr++;
		}
	}
	return ptrUniqueArr;
}

void BubbleSort(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}