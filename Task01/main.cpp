/*1. �������� �������, ��� ������ ����� � ���� �������.
���� ���� ��������� ������� � ����� � ������� ���� ������.
������������� � main ���� ��������, ��������� ���������� �������� ���������.
����� �������� ��������� �������, ��� ������� ������ ���������� ��������
� ����� ��������� ������ ���������. � ��� � main ������ 2 ���������
(���� �� ��������� ������� � ���� �� ���������). �������� �������,
��� ������ 2 ��������� � ���� �������� ����� ������.
������������� ���, ���������� ���� 2 ���������.
��� ����� �� �������� ������ �������� ���������� � ����������
�������� � ������. ����� �� 10 ��������, ��� �����, ���������� ��������.
������� ����� �� ����� �� � ���� ������������ �������.*/

#include <iostream>
#include <ctime>

using namespace std;

void ShowArrNorm(const int arr[], const int SIZE);
void NewArr(int arr[], const int SIZE);
int* MinElementArr(int arr[], const int SIZE);
int* MaxElementArr(int arr[], const int SIZE);
void SwapMinAndMax(int* ptrMin, int* ptrMax);

int main()
{
	srand(time(nullptr));

	const int SIZE = 10;
	int arr[SIZE]{};
	int* ptrMin, * ptrMax;

	ShowArrNorm(arr, SIZE);
	NewArr(arr, SIZE);
	ShowArrNorm(arr, SIZE);

	cout << "Min address - " << (ptrMin = MinElementArr(arr, SIZE)) << endl;
	cout << "Max address - " << (ptrMax = MaxElementArr(arr, SIZE)) << endl;
	cout << "Value Min - " << *ptrMin << endl;
	cout << "Value Max - " << *ptrMax << endl;

	cout << "\nTime to swap \n";
	SwapMinAndMax(ptrMin, ptrMax);
	ShowArrNorm(arr, SIZE);
	cout << "Swap - Value Min - " << *ptrMin << endl;
	cout << "Swap - Value Max - " << *ptrMax << endl;

	return 0;
}

void ShowArrNorm(const int arr[], const int SIZE)
{
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void NewArr(int arr[], const int SIZE)
{
	for (size_t i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
	}
}
int* MinElementArr(int arr[], const int SIZE)
{
	int min = arr[0];
	int index = 0;
	for (size_t i = 0; i < SIZE; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
			index = i;
		}
	}
	return &arr[index];
}
int* MaxElementArr(int arr[], const int SIZE)
{
	int max = arr[0];
	int index = 0;
	for (size_t i = 0; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			index = i;
		}
	}
	return &arr[index];
}
void SwapMinAndMax(int* ptrMin, int* ptrMax)
{
	int temp = *ptrMin;
	*ptrMin = *ptrMax;
	*ptrMax = temp;
}