/*
3.	Напишіть програму, в якій буде з самого початку двовимірний масив 3 на 3. Також буде меню:
-	Показати масив
-	Добавити рядок до масиву
-	Добавити стовпчик до масиву
-	Видалити рядок із масиву (номер вказує користувач)
-	Видалити стовпчик із масиву (номер вказує користувач)
-	Вихід
Кожний пункт – це окрема функція.

*/

#include <iostream>
#include <ctime>

using namespace std;

void ShowArr(const int* const* arr, size_t rows, size_t cols);

void InitializeArr(int* const* arr, size_t rows, size_t cols);

void DelArr(int** arr, size_t rows);

int** CreateArr(size_t cols, size_t rows);

int** CreateNewRows(int** ptrArr, const size_t COLS, int& rows);

void DelArrWithoutNullPtr(int** arr, size_t rows);

int** CreateNewCols(int** ptrArr, int& cols, const size_t ROWS);

int** DeleteRows(int** ptrArr, const size_t COLS, int& rows, size_t choiseDelete);

int** DeleteCols(int** ptrArr, int& cols, const size_t ROWS, size_t choiseDelete);

int main()
{
	srand(time(nullptr));

	int rows = 3, cols = 3;
	int choise, choiseDelete;

	cout << "My Array\n";
	int** ptrArr = CreateArr(cols, rows);
	InitializeArr(ptrArr, rows, cols);

	for (bool exit = false; ;)
	{
		if (exit)
			break;

		cout << "1 - Show Array\n2 - Plus 1 ROWS\n3 - Plus 1 COLS\n4 - Delete one ROWS\n5 - Delete one COLS\n";
		cout << "Other choise - EXIT\n";
		cout << "Your choise: ";
		cin >> choise;

		switch (choise)
		{
		case 1:
		{
			cout << "Your array\n";
			ShowArr(ptrArr, rows, cols);
			break;
		}
		case 2:
		{
			cout << "Plus 1 ROWS\n";
			int** tempArr = CreateNewRows(ptrArr, cols, rows);
			DelArrWithoutNullPtr(ptrArr, rows - 1);
			ptrArr = tempArr;
			tempArr = nullptr;
			break;
		}
		case 3:
		{
			cout << "Plus 1 COLS\n";
			int** tempArr = CreateNewCols(ptrArr, cols, rows);
			DelArrWithoutNullPtr(ptrArr, rows);
			ptrArr = tempArr;
			tempArr = nullptr;
			break;
		}
		case 4:
		{
			cout << "Delete ROWS. Enter ROWS for delete. [ Index = 0 - " << rows - 1 << " ] - ";
			cin >> choiseDelete;
			if (choiseDelete >= rows || choiseDelete < 0)
			{
				cout << "Error\n";
				return 0;
			}

			int** tempArr = DeleteRows(ptrArr, cols, rows, choiseDelete);
			DelArrWithoutNullPtr(ptrArr, rows + 1);
			ptrArr = tempArr;
			tempArr = nullptr;
			break;
		}
		case 5:
		{
			cout << "Delete COLS. Enter COLS for delete. [ Index = 0 - " << cols - 1 << " ] - ";
			cin >> choiseDelete;
			if (choiseDelete >= cols || choiseDelete < 0)
			{
				cout << "Error\n";
				return 0;
			}

			int** tempArr = DeleteCols(ptrArr, cols, rows, choiseDelete);
			DelArrWithoutNullPtr(ptrArr, rows);
			ptrArr = tempArr;
			tempArr = nullptr;
			break;
		}
		default:
			cout << "Exit\n";
			exit = true;
			break;
		}
	}

	DelArr(ptrArr, rows);

	return 0;
}

int** CreateNewRows(int** ptrArr, const size_t COLS, int& rows)
{
	int** tempArr = new int* [rows + 1];
	for (size_t i = 0; i < rows + 1; i++)
	{
		tempArr[i] = new int[COLS];
	}

	rows++;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (rows - 1 == i)
			{
				tempArr[i][j] = 0;
			}
			else
			{
				tempArr[i][j] = ptrArr[i][j];
			}
		}
	}

	return tempArr;
}

void DelArrWithoutNullPtr(int** arr, size_t rows)
{
	for (size_t i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

int** CreateNewCols(int** ptrArr, int& cols, const size_t ROWS)
{
	cols++;
	int** tempArr = new int* [ROWS];
	for (size_t i = 0; i < ROWS; i++)
	{
		tempArr[i] = new int[cols];
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (cols - 1 == j)
			{
				tempArr[i][j] = 0;
			}
			else
			{
				tempArr[i][j] = ptrArr[i][j];
			}
		}
	}

	return tempArr;
}

int** DeleteRows(int** ptrArr, const size_t COLS, int& rows, size_t choiseDelete)
{
	rows--;
	int** tempArr = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		tempArr[i] = new int[COLS];
	}

	for (int i = 0, k = 0; i < rows; i++, k++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (k == choiseDelete)
			{
				k++;
				for (j = 0; j < COLS; j++)
				{
					tempArr[i][j] = ptrArr[k][j];
				}
				break;
			}
			else
			{
				tempArr[i][j] = ptrArr[k][j];
			}
		}
	}

	return tempArr;
}

int** DeleteCols(int** ptrArr, int& cols, const size_t ROWS, size_t choiseDelete)
{
	cols--;
	int** tempArr = new int* [ROWS];
	for (size_t i = 0; i < ROWS; i++)
	{
		tempArr[i] = new int[cols];
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0, k = 0; j < cols; j++, k++)
		{
			if (j == choiseDelete)
			{
				k++;
				tempArr[i][j] = ptrArr[i][k];
			}
			else
			{
				tempArr[i][j] = ptrArr[i][k];
			}
		}
	}

	return tempArr;
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

int** CreateArr(size_t cols, size_t rows)
{
	int** arr = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	return arr;
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