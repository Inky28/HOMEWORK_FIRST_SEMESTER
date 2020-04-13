/*4.Створити функцію, яка приймає двовимірний масив 10 на 10.
Вона заповнює його границі значеннями 0, а середину рандомними значеннями від 1 до 10.*/


#include <iostream>
#include <ctime>

using namespace std;

void ShowArr2D(int arr2D[][10], const int ROWS);

int main()
{
	const int ROWS = 10;
	const int COLS = 10;
	int arr2D[ROWS][COLS]{};

	ShowArr2D(arr2D, 10);

	return 0;
}

void ShowArr2D(int arr2D[][10], const int ROWS)
{
	srand(time(nullptr));

	for (int i = 1; i < ROWS - 1; i++)
	{
		for (int j = 1; j < 10 - 1; j++)
		{
			arr2D[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << arr2D[i][j] << "  ";
		}
		cout << endl;
	}
	cout << endl;
}