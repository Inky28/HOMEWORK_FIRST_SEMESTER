/*
Тема: вказівники на функції
1.	Створіть двовимірний масив на кучі користувацького розміру

Напишіть функцію, яка приймає цей масив і вказівник на функцію типу bool (*predicate)(int number),
яка приймає елемент масиву і повертає відповідний тип.

Напишіть функції:
-	Bool IsSimple(int element);
-	Bool IsOdd(int element);
-	Bool IsZero(int element);

По перекладу їх назв зрозуміло, що вони мають робити.

Застосуйте ці функції, відправивши їх в головну.

Головна функція має повертає кількість елементів, для яких спрацювала функція у вказівнику.

На екрані має бути кількість простих чисел, кількість непарних чисел і кількість нулів.

*/

#include <iostream>
#include <ctime>

using namespace std;

int** CreateArr(size_t cols, size_t rows);
void InitializeArr(int* const* arr, size_t rows, size_t cols);
void ShowArr(const int* const* arr, size_t rows, size_t cols);
int DoSometingItsMainFunk(const int* const* ptrArr, const size_t ROWS, const size_t COLS, bool (*predicate)(int number));
bool IsSimple(int element);
bool IsOdd(int element);
bool IsZero(int element);
void DelArr(int** arr, size_t rows);

int main()
{
	srand(time(nullptr));

	int rows = 5, cols = 4;

	cout << "My Array\n";
	int** ptrArr = CreateArr(cols, rows);
	InitializeArr(ptrArr, rows, cols);
	ShowArr(ptrArr, rows, cols);

	cout << "ZERO - " << DoSometingItsMainFunk(ptrArr, rows, cols, IsZero) << endl;
	cout << "ODD - " << DoSometingItsMainFunk(ptrArr, rows, cols, IsOdd) << endl;
	cout << "SIMPLE - " << DoSometingItsMainFunk(ptrArr, rows, cols, IsSimple) << endl;

	DelArr(ptrArr, rows);

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

int** CreateArr(const size_t COLS, const size_t ROWS)
{
	int** arr = new int* [ROWS];
	for (size_t i = 0; i < ROWS; i++)
	{
		arr[i] = new int[COLS];
	}
	return arr;
}

void InitializeArr(int* const* arr, const size_t ROWS, const size_t COLS)
{
	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}

void ShowArr(const int* const* arr, const size_t ROWS, const size_t COLS)
{
	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

int DoSometingItsMainFunk(const int* const* ptrArr, const size_t ROWS, const size_t COLS, bool (*predicate)(int number))
{
	int count = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (predicate(ptrArr[i][j]))
			{
				count++;
			}
		}
	}

	return count;
}

bool IsSimple(int element)
{
	if (element == 0 || element == 1)
		return false;

	for (int i = element / 2; i > 1; --i)
	{
		if (element % i == 0)
			return false;
	}
	return true;
}

bool IsOdd(int element)
{
	if (element == 0)
		return false;

	if (element % 2 == 0)
		return false;
	else
		return true;
}

bool IsZero(int element)
{
	if (element == 0)
		return true;
	else
		return false;
}