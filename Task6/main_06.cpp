/*6.��������� ���, �� � �����, �� ����� ����� �����.
���������� �� �������� �� ����� �����, ����� �� ����� ������,
������� ���� ����������.���� �� ����� ���������� ������ � �� ������.
���� �� �����������, ��� ������ ���������� � ����� ����� � ����� ����� ���
���������� �� ���� ������.���� ���������� ��� ���������� �� ������ ������ � ����� ���.
� ����� �� ���� ������������� :
-����� � �� ����� 10 �� 10 �� �������.�������� �������, ��� ���� ��������,
�� �������, ��� ���� ��������.
- �������, ��� �������� �����, ������ � �������� ���
�������(������ �� �����, �� ����� � � �� ������) � ����� ������� ������ �ѻ(��� �����)
� �������� �����.
- ��� ��� � ����.���� ����� �� ���� �������, ���� ���������� �� ����� ��������
����������, ��� ���� ���������� �� ������� �� ��� ������.��� �����
�� ������ ������� IsCorrect, ��� ������ ����� � ����������.
���� ������� �������� ���� bool � ��������� �� ����, �� �������� ����������.
����� ������ ������� Find, ��� ������ ����� � ������������ � �������
�������� ���� bool � ��������� �� ����, �� ���������� ������ � ������������ ������.
�� ���� ����� �� ������� �� ����. */

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


