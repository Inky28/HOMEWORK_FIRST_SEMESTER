/*Створіть користувацький масив, який заповнений буде рандомом.

Виведіть його на екран.

Видаліть найбільше і найменше значення в ньому.

Виведіть масив знову на екран.
*/
#include <iostream>
#include <ctime>

using namespace std;

void ShowArr(const int arr[], const int SIZE);

void NewArr(int arr[], const int SIZE);

int MaxArr(int arr[], const int size);

int MinArr(int arr[], const int size);

void WithoutMaxAndMin(int arr[], const int SIZE, int maxIndex, int minIndex, int* ptrArrWithout);

int main()
{
	srand(time(nullptr));

	int size;
	cout << "Enter size - ";
	cin >> size;
	int* ptrArr = new int [size] {};
	int* ptrArrWithoutMaxAndMin = new int[size - 2]{};

	NewArr(ptrArr, size);
	ShowArr(ptrArr, size);

	cout << "The max index = " << MaxArr(ptrArr, size) << endl;
	cout << "The min index = " << MinArr(ptrArr, size) << endl;

	WithoutMaxAndMin(ptrArr, size, MaxArr(ptrArr, size), MinArr(ptrArr, size), ptrArrWithoutMaxAndMin);

	ShowArr(ptrArrWithoutMaxAndMin, size - 2);

	delete[] ptrArrWithoutMaxAndMin;
	ptrArrWithoutMaxAndMin = nullptr;

	return 0;
}

void ShowArr(const int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void NewArr(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 50 + 1;
	}
}

int MaxArr(int arr[], const int size)
{
	int* ptrMax = &arr[0];
	int indexMax;
	for (int i = 1; i < size; i++)
	{
		if (*ptrMax < arr[i])
		{
			ptrMax = &arr[i];
			indexMax = i;
		}
	}
	return indexMax;
}

int MinArr(int arr[], const int size)
{
	int* ptrMin = &arr[0];
	int indexMin;
	for (int i = 1; i < size; i++)
	{
		if (*ptrMin > arr[i])
		{
			ptrMin = &arr[i];
			indexMin = i;
		}
	}
	return indexMin;
}

void WithoutMaxAndMin(int arr[], const int SIZE, int maxIndex, int minIndex, int* ptrArrWithout)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (i == maxIndex || i == minIndex)
		{
			continue;
		}
		else
		{
			*(ptrArrWithout++) = arr[i];
		}
	}
	delete[] arr;
	arr = nullptr;
}