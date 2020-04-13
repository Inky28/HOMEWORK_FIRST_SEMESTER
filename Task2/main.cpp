/*Тема: сортування
Створіть масив, заповніть завдяки функціям його рандомно і виведіть на екран.

Напишіть алгоритм сортування вставками, в якому сортування іде не по зростанню а по спаданню.
Цей алгоритм засуньте у функцію, викличте її. Виведіть відсортований масив.

(Підказка: у всіх алгоритмах сортування, які я показав, щоб змінити сортування по зростанню
на сортування по спаданню, достатньо змінити лише один знак. Де, спробуйте самі догадатись).
*/

#include <iostream>
#include <ctime>

using namespace std;

void NewArr(int arr[], const int SIZE);
void ShowArr(const int arr[], const int SIZE);
void SortArr(int arr[], const int SIZE);

int main()
{
	srand(time(nullptr));

	const int SIZE = 10;
	int arr[SIZE]{};

	NewArr(arr, 10);
	ShowArr(arr, 10);

	SortArr(arr, 10);
	ShowArr(arr, 10);

	return 0;
}

void NewArr(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
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
void SortArr(int arr[], const int SIZE)
{
	int temp;
	for (int i = 0, j; i < SIZE; i++)
	{
		temp = arr[i];
		for (j = i - 1; j >= 0 && arr[j] < temp; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = temp;
	}
}