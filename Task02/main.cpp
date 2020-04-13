/*
1.	Двовимірний масив схожий на матрицю в математиці. Напишіть програму, в якій користувач
зможе добавляти дві матриці між собою. Він вводить розміри першої, потім другої і ви
створюєте результуючий масив, елементи якого будуть зберігати суму матриць.

2.	Аналогічна задача попередній, тільки реалізуйте множення матриць.
*/

#include <iostream>
#include <ctime>

using namespace std;

void ShowArr(const int* const* arr, size_t rows, size_t cols);
void InitializeArr(int* const* arr, size_t rows, size_t cols);
void DelArr(int** arr, size_t rows);
int** CreateArr(int cols, int rows);
int** SumArray(int** ptrArrFirst, int** ptrArrSecond, int** ptrArrSum, const int FIRST_ROWS, const int FIRST_COLS, const int SECOND_ROWS, const int SECOND_COLS);
void ArrZero(int* const* arr, size_t rows, size_t cols);

int main()
{
	srand(time(nullptr));

	int firstRows, firstCols;
	int secondRows, secondCols;

	cout << "Enter size First array. Cols and Rows:\n";
	cin >> firstCols >> firstRows;

	cout << "Enter size Second array. Cols and Rows:\n";
	cin >> secondCols >> secondRows;

	cout << "My First Array\n";
	int** ptrArrFirst = CreateArr(firstCols, firstRows);
	InitializeArr(ptrArrFirst, firstRows, firstCols);
	ShowArr(ptrArrFirst, firstRows, firstCols);

	cout << "My Second Array\n";
	int** ptrArrSecond = CreateArr(secondCols, secondRows);
	InitializeArr(ptrArrSecond, secondRows, secondCols);
	ShowArr(ptrArrSecond, secondRows, secondCols);

	int bigCols, bigRows;
	firstCols >= secondCols ? bigCols = firstCols : bigCols = secondCols;
	firstRows >= secondRows ? bigRows = firstRows : bigRows = secondRows;

	int** ptrArrSum = CreateArr(bigCols, bigRows);
	cout << "Sum array\n";
	ArrZero(ptrArrSum, bigRows, bigCols);
	SumArray(ptrArrFirst, ptrArrSecond, ptrArrSum, firstRows, firstCols, secondRows, secondCols);
	ShowArr(ptrArrSum, bigRows, bigCols);

	DelArr(ptrArrFirst, firstRows);
	DelArr(ptrArrSecond, secondRows);
	DelArr(ptrArrSum, bigRows);

	return 0;
}

void DelArr(int** arr, size_t rows)
{
	for (size_t i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = nullptr;
}

int** CreateArr(int cols, int rows)
{
	int** arr = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	return arr;
}

void ArrZero(int* const* arr, size_t rows, size_t cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			arr[i][j] = 0;
		}
	}
}

void InitializeArr(int* const* arr, size_t rows, size_t cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}

void ShowArr(const int* const* arr, size_t rows, size_t cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

int** SumArray(int** ptrArrFirst, int** ptrArrSecond, int** ptrArrSum, const int FIRST_ROWS, const int FIRST_COLS, const int SECOND_ROWS, const int SECOND_COLS)
{
	for (size_t i = 0; i < FIRST_ROWS; i++)
	{
		for (size_t j = 0; j < FIRST_COLS; j++)
		{
			ptrArrSum[i][j] = ptrArrFirst[i][j];
		}
	}
	for (size_t i = 0; i < SECOND_ROWS; i++)
	{
		for (size_t j = 0; j < SECOND_COLS; j++)
		{
			ptrArrSum[i][j] = ptrArrSecond[i][j];
		}
	}

	int smallCols, smallRows;
	FIRST_COLS >= SECOND_COLS ? smallCols = SECOND_COLS : smallCols = FIRST_COLS;
	FIRST_ROWS >= SECOND_ROWS ? smallRows = SECOND_ROWS : smallRows = FIRST_ROWS;

	for (size_t i = 0; i < smallRows; i++)
	{
		for (size_t j = 0; j < smallCols; j++)
		{
			ptrArrSum[i][j] *= ptrArrFirst[i][j];
		}
	}

	return ptrArrSum;
}