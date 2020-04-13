/*Тема: бінарний пошук і швидке сортування

1. Добавте в ваш проект функції бінарного пошуку і швидкого сортування.
Змініть алгоритм сортування так, щоб сортування йшло по спаданню.
Протестуйте функцію.
Перепишіть алгоритм пошуку так, щоб він виконувався через рекурсію.
Протестуйте функцію.
*/

#include <iostream>

using namespace std;

void ShowArr(const int arr[], const int SIZE);
void FastSort(int arr[], int first, int last);
void FastSortFromBigger(int arr[], int first, int last);
bool Find(const int arr[], int leftBorder, int rightBorder, const int key);
bool BinaryFind(const int arr[], int leftBorder, int rightBorder, const int key);

int main()
{
	const int SIZE = 10;
	int arr[SIZE]{ 24,76,43,88,34,21,74,11,45,39 };

	cout << "My arr\n";
	ShowArr(arr, SIZE);
	cout << "Sort arr. From bigger to smaller\n";
	FastSortFromBigger(arr, 0, SIZE - 1);
	ShowArr(arr, SIZE);
	cout << "Sort arr. From smaller to bigger\n";
	FastSort(arr, 0, SIZE - 1);
	ShowArr(arr, SIZE);
	cout << "Time to Find number\n";
	Find(arr, 0, SIZE - 1, 34) ? cout << "Find\n" : cout << "Not find\n";
	cout << "Binary search\n";
	BinaryFind(arr, 0, SIZE - 1, 34) ? cout << "Find\n" : cout << "Not find\n";

	return 0;
}

void ShowArr(const int arr[], const int SIZE)
{
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void FastSort(int arr[], int first, int last)
{
	int i = first, j = last;
	int temp;
	int middle = arr[(i + j) / 2];

	do
	{
		while (arr[i] < middle)
		{
			i++;
		}

		while (arr[j] > middle)
		{
			j--;
		}

		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;

			i++;
			j--;
		}

	} while (i < j);

	if (j > first)
	{
		FastSort(arr, first, j);
	}

	if (i < last)
	{
		FastSort(arr, i, last);
	}
}

void FastSortFromBigger(int arr[], int first, int last)
{
	int i = first, j = last;
	int temp;
	int middle = arr[(i + j) / 2];

	do
	{
		while (arr[i] > middle)
		{
			i++;
		}

		while (arr[j] < middle)
		{
			j--;
		}

		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;

			i++;
			j--;
		}

	} while (i < j);


	if (j > first)
	{
		FastSortFromBigger(arr, first, j);
	}

	if (i < last)
	{
		FastSortFromBigger(arr, i, last);
	}
}

bool Find(const int arr[], int leftBorder, int rightBorder, const int key)
{
	while (leftBorder <= rightBorder)
	{
		int middleIndex = (leftBorder + rightBorder) / 2;

		if (key == arr[middleIndex])
		{
			return true;
		}

		if (key < arr[middleIndex])
		{
			rightBorder = middleIndex - 1;
		}
		else
		{
			leftBorder = middleIndex + 1;
		}
	}
	return false;
}

bool BinaryFind(const int arr[], int leftBorder, int rightBorder, const int key)
{
	while (leftBorder <= rightBorder)
	{
		int middleIndex = (leftBorder + rightBorder) / 2;

		if (key == arr[middleIndex])
		{
			return true;
		}

		if (key < arr[middleIndex])
		{
			BinaryFind(arr, leftBorder, (rightBorder = ((leftBorder + rightBorder) / 2) - 1), key);
		}
		else
		{
			BinaryFind(arr, (leftBorder = ((leftBorder + rightBorder) / 2) + 1), rightBorder, key);
		}
	}
	return false;
}