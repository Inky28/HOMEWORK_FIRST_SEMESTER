/* Тема: посилання
Створіть звичайний двовимірний масив на стеку 5 на 5.

Нехай користувач вводить номер рядка (це може бути від 0 до 4).

Створіть посилання на підмасив з цим індексом і виведіть на екран його завдяки ньому.
*/

#include <iostream>
#include <ctime>

using namespace std;

void ShowArray(const int arr[][5], const int ROWS, const int COLS);

void InitializeArray(int arr[][5], const int ROWS, const int COLS);

void ShowOnlyRows(const int& refSmallArr, const int ROWS);

int main()
{
	srand(time(nullptr));

	const int ROWS = 5, COLS = 5;
	int arr[ROWS][COLS];
	int findRows;

	cout << "Original array\n";
	InitializeArray(arr, ROWS, COLS);
	ShowArray(arr, ROWS, COLS);

	cout << "Enter number Rows (from 0-4) - ";
	cin >> findRows;
	if (findRows > 4 || findRows < 0)
	{
		cout << "Sorry. Error\n";
	}
	else
	{
		int& refSmallArr = arr[findRows][0];
		cout << "Find Rows\n";
		ShowOnlyRows(refSmallArr, ROWS);
	}

	return 0;
}

void ShowArray(const int arr[][5], const int ROWS, const int COLS)
{
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void InitializeArray(int arr[][5], const int ROWS, const int COLS)
{
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			arr[i][j] = rand() % 50 + 10;
		}
	}
}

void ShowOnlyRows(const int& refSmallArr, const int ROWS)
{
	for (int i = 0; i < ROWS; i++)
	{
		cout << *(&refSmallArr + i) << " ";
	}
	cout << endl;
}