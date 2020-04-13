/*6.Створюємо гру, де є город, на якому сидіть Семен.
Користувач має побачити на екрані город, найти на ньому Семена,
вказати його координати.Якщо він вказує координати Семена – він виграв.
Якщо він промахнувся, але вказав координати в межах горда – Семен змінює свої
координати на інші радомні.Якщо користувач ввів координати за межами города – Семен тікає.
А тепер на мову програмування :
-Город – це масив 10 на 10 із символів.Напишіть функцію, яка його виводить,
та функцію, яка його заповнює.
- Функція, яка заповнює масив, записує в елементи різні
символи(бажано не цифри, не букви і в не пробіли) а також ставить символ «С»(наш Семен)
в рандомну точку.
- Гра йде в циклі.Цикл триває до того моменту, поки користувач не введе правильні
координати, або поки координати не вийдуть за межі масиву.Для цього
ви пишете функцію IsCorrect, яка приймає масив і координати.
Вона повертає значення типу bool в залежності від того, чи правильні координати.
Також пишете функцію Find, яка приймає масив з координатами і повертає
значення типу bool в залежності від того, чи координати гравця є координатами Семена.
Всі інші деталі та функції за вами. */

#include <iostream>
#include <ctime>

using namespace std;

void ShowArr(char arr[][10], const int ROWS, const int COLS);

void NewArr(char arr[][10], const int ROWS, const int COLS);

bool inCorrect(char arr[][10], const int ROWS, const int COLS, int x, int y);

bool Find(char arr[][10], const int ROWS, const int COLS, int x, int y);

int main()
{
	const int ROWS = 10;
	const int COLS = 10;
	char arr[ROWS][COLS]{};
	int x, y;

	for (;;)
	{
		cout << "Enter the coordinates \n";
		cout << "Widht - ";
		cin >> x;
		cout << "Height - ";
		cin >> y;
		cout << endl;
		NewArr(arr, 10, 10);
		inCorrect(arr, 10, 10, x, y);

		if (inCorrect(arr, 10, 10, x, y))
		{
			cout << "Wrong coordinates \n";
			cout << "Semen escape from the city \n";
			cout << "\t THE END\n";
			break;
		}

		ShowArr(arr, 10, 10);
		cout << endl;

		if (Find(arr, 10, 10, x, y))
		{
			cout << "You find Semen\n";
			cout << "\tCONGRATULATIONS\n";
			break;
		}
		else
		{
			//int exit;
			cout << "Semen not found\n";
			/*cout << "\tEXIT - 0\n";
			cout << "\tAnother attempt - 1\n";
			cout << "Your choise - ";
			cin >> exit;
			if (exit == 0)
			{
				cout << "Bye\n";
				break;
			}*/
		}
	}
}

void ShowArr(char arr[][10], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
}

void NewArr(char arr[][10], const int ROWS, const int COLS)
{
	srand(time(nullptr));
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 39 + 179;
		}
	}
	arr[rand() % 10][rand() % 10] = 'C';
	/*arr[5][5] = 'C';*/
}

bool inCorrect(char arr[][10], const int ROWS, const int COLS, int x, int y)
{
	if (x > ROWS - 1 || y > COLS - 1 || x < 0 || y < 0)
	{
		bool wrong = true;
		return wrong;
	}
	return false;
}

bool Find(char arr[][10], const int ROWS, const int COLS, int x, int y)
{
	if (arr[x][y] == 'C')
	{
		bool find = true;
		return find;
	}
	return false;
}


