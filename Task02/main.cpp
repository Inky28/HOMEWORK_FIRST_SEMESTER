/*2.	�������� �������, ��� ������ ���������� ����� � ���� �������.
������� ���� � ����� �������, ���� �������� ����� ��������
� ������� ������ ����� ��������. ��������� �� ������ ���������
� ������� ����� ������� �� ����� ��� �����. �������� ������� ����
���������� �����, � ���� ������� ��� ��������.*/

#include <iostream>
#include <ctime>

using namespace std;

int* SumSmallArr(int arr[][5], const int ROWS, const int COLS);

void TwoArr(int arr[][5], const int ROWS, const int COLS);

void ShowTwoArr(int arr[][5], const int ROWS, const int COLS);

void ShowSmallArr(int arr[], const int ROWS);

int main()
{
	srand(time(nullptr));

	const int ROWS = 10, COLS = 5;
	int arr[ROWS][COLS]{};
	int* ptrMinSmallArr;

	cout << "My arr [ROWS = " << ROWS << "]" << " [COLS = " << COLS << "]\n";
	TwoArr(arr, ROWS, COLS);
	ShowTwoArr(arr, ROWS, COLS);

	cout << "Address min arr - " << SumSmallArr(arr, ROWS, COLS) << endl;
	ptrMinSmallArr = SumSmallArr(arr, ROWS, COLS);

	cout << "\tSMALL ARR\n";
	ShowSmallArr(ptrMinSmallArr, ROWS);
	cout << "\tTHE END\n";

	return 0;
}

int* SumSmallArr(int arr[][5], const int ROWS, const int COLS)
{
	int sum = 0;
	int minSum = 0;
	int index = 0;
	for (size_t i = 0; i < COLS; i++)
	{
		for (size_t j = 0; j < ROWS; j++)
		{
			sum += arr[i][j];
		}

		if (minSum == 0 || sum < minSum)
		{
			minSum = sum;
			sum = 0;
			index = i;
		}
		else
		{
			sum = 0;
		}
	}
	return &arr[index][0];
}

void TwoArr(int arr[][5], const int ROWS, const int COLS)
{
	for (size_t i = 0; i < COLS; i++)
	{
		for (size_t j = 0; j < ROWS; j++)
		{
			arr[i][j] = rand() % 50 + 10;
		}
	}
}

void ShowTwoArr(int arr[][5], const int ROWS, const int COLS)
{
	for (size_t i = 0; i < COLS; i++)
	{
		for (size_t j = 0; j < ROWS; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void ShowSmallArr(int arr[], const int ROWS)
{
	for (int i = 0; i < ROWS; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}