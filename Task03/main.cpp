/*3. Напишіть функцію, яка реалізовує лінійний пошук.

Але вона приймає адресу першого і останнього елементу масиву.

Третій параметром є константна адреса шукаючого значення.

Напишіть алгоритм пошуку, в якому фігурують лише вказівники і ніякої індексації.

Якщо функція найшла елемент – вона повертає його константну адресу.

Якщо не найшла – nullptr. Перевірте її в if.

Створіть масив, заповніть його, виведіть на екран і дайте користувачу ввести значення. */

#include <iostream>
#include <ctime>

using namespace std;

void ShowArr(const int arr[], const int SIZE);
void InitializeArr(int arr[], const int SIZE);
int* Find(int* ptrFirst, int* ptrLast, int* const ptrFind);

int main()
{
	srand(time(nullptr));

	const int SIZE = 15;
	int arr[SIZE]{};
	int* ptrFirst = arr;
	int* ptrLast = (arr + SIZE);
	int find;
	int* const ptrFind = &find;

	cout << "Find number - ";
	cin >> find;

	InitializeArr(arr, SIZE);
	ShowArr(arr, SIZE);

	if (Find(ptrFirst, ptrLast, ptrFind) == ptrFind)
	{
		cout << "Find - " << *ptrFind << endl;
	}
	else
	{
		cout << "Not Find - " << *ptrFind << endl;
	}

	return 0;
}

int* Find(int* ptrFirst, int* ptrLast, int* const ptrFind)
{
	int size = ptrLast - ptrFirst;
	for (int i = 0; i < size; i++)
	{
		if (*ptrFind == *(ptrFirst++))
		{
			return ptrFind;
		}
	}
	return nullptr;
}

void ShowArr(const int arr[], const int SIZE)
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
		arr[i] = rand() % 10;
	}
}
