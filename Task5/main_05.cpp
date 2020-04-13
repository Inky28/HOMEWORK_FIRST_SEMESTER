/*5.Створити меню з наступних пунктів :
-показати масив;
-обнулити масив;
-перезаповнити масив;
-домножити масив на число;
-додати до масиву число;
-вихід.
Кожний пункт меню(окрім виходу) – це функція, яка виконує свою роботу.
Перші 3 функції приймають лише масив з його розміром.
Четверта і п’ята приймають ще й число, на яке треба домножити масив.
У вас з самого початку є в main масив із 10 елементів та змінна,
яка відповідає за число користувача.*/

#include <iostream>

using namespace std;

void ShowArray(int arr1[], const int SIZE1);

void ZeroArray(int arr1[], const int SIZE1);

void NewArray(int arr1[], const int SIZE1);

void ArrayAndNumber(int arr1[], const int SIZE1, int number);

void ArrayPlusNumber(int arr1[], const int SIZE1, int number);

int main()
{
	int number;
	const int SIZE1 = 10;
	int arr1[SIZE1]{};

	cout << "1 - Show Array\n";
	cout << "2 - Array = 0\n";
	cout << "3 - Enter new Array\n";
	cout << "4 - Array * number\n";
	cout << "5 - Array + number\n\n";
	cout << "6 - EXIT\n";

	for (; ; )
	{
		cout << "Enter number - ";
		cin >> number;
		for (; ;)
		{
			if (number <= 0 || number > 6)
			{
				cout << "Error\n";
				cout << "Enter new number - ";
				cin >> number;
			}
			else
			{
				break;
			}
		}
		switch (number)
		{
		case 1:
		{
			cout << "1 - Show Array\n";
			ShowArray(arr1, 10);
			break;
		}
		case 2:
		{
			cout << "2 - Array = 0\n";
			ZeroArray(arr1, 10);
			break;
		}
		case 3:
		{
			cout << "3 - Enter new Array\n";
			NewArray(arr1, 10);
			break;
		}
		case 4:
		{
			cout << "4 - Array * number\n";
			ArrayAndNumber(arr1, 10, 2);
			break;
		}
		case 5:
		{
			cout << "5 - Array + number\n";
			ArrayPlusNumber(arr1, 10, 30);
			break;
		}
		case 6:
		{
			cout << "6 - EXIT\n";
			break;
		}
		}
		if (number == 6)
		{
			break;
		}
	}
	return 0;
}

void ShowArray(int arr1[], const int SIZE1)
{
	for (int i = 0; i < SIZE1; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;
}

void ZeroArray(int arr1[], const int SIZE1)
{
	for (int i = 0; i < SIZE1; i++)
	{
		arr1[i] = 0;
	}
	cout << endl;
}

void NewArray(int arr1[], const int SIZE1)
{
	for (int i = 0; i < SIZE1; i++)
	{
		cin >> arr1[i];
	}
	cout << endl;
}

void ArrayAndNumber(int arr1[], const int SIZE1, int number)
{
	for (int i = 0; i < SIZE1; i++)
	{
		arr1[i] *= number;
	}
	cout << endl;
}

void ArrayPlusNumber(int arr1[], const int SIZE1, int number)
{
	for (int i = 0; i < SIZE1; i++)
	{
		arr1[i] += number;
	}
	cout << endl;
}