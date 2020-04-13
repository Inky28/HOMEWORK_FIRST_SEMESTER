/*4.Створіть функцію, яка реалізовує бінарний пошук.

Переробіть її так, щоб вона приймала вказівник на перший і останній елементи масиву.

Третім параметром є шукаюче значення.

Ускладнювати не будемо, нехай функцію повертає true, якщо знайшла значення і false в іншому випадку.*/

#include <iostream>
#include <ctime>

using namespace std;

void Sort(int arr[], int firstIndex, int lastIndex);
void ShowArr(const int arr[], const int SIZE);
bool Find(const int arr[], int* leftBorder, int* rightBorder, const int key);
void InitializeArr(int arr[], const int SIZE);

int main()
{
	srand(time(nullptr));

	const int SIZE = 20;
	int arr[SIZE]{};
	int* ptrFirst = arr;
	int* ptrLast = (arr + SIZE);
	int find;

	cout << "Find number - ";
	cin >> find;

	InitializeArr(arr, SIZE);
	ShowArr(arr, SIZE);
	Sort(arr, 0, SIZE - 1);
	ShowArr(arr, SIZE);

	if (Find(arr, ptrFirst, ptrLast, find))
	{
		cout << "Find - " << find << endl;
	}
	else
	{
		cout << "Not find - " << find << endl;
	}

	return 0;
}

void Sort(int arr[], int firstIndex, int lastIndex)
{
	int i = firstIndex, j = lastIndex;
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

	if (j > firstIndex)
	{
		Sort(arr, firstIndex, j);
	}

	if (i < lastIndex)
	{
		Sort(arr, i, lastIndex);
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

bool Find(const int arr[], int* leftBorder, int* rightBorder, const int key)
{
	int indexFirst = leftBorder - leftBorder;
	int indexLast = rightBorder - leftBorder;

	while (indexFirst <= indexLast)
	{
		int middleIndex = (indexFirst + indexLast) / 2;

		if (key == arr[middleIndex])
		{
			return true;
		}

		if (key < arr[middleIndex])
		{
			indexLast = middleIndex - 1;
		}
		else
		{
			indexFirst = middleIndex + 1;
		}
	}
	return false;
}

void InitializeArr(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}
}