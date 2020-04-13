/*
4.	Користувач вводить текст. А потім вводить 2 індекси.
Видалити з масиву все, що находиться між цими індексами і вивести на екран.
*/
#include <iostream>
#include <cstring>

using namespace std;

void ChangeArrStr(char str[], const int SIZE, int first, int second);

int main()
{
	const int SIZE = 50;
	char str[SIZE]{};

	int indexFirst, indexSecond;

	cout << "Enter text. Max - " << SIZE << " symbol\n";
	cin.getline(str, SIZE);

	cout << "Enter 2 index. Max - " << SIZE - 1 << " index\n";
	cin >> indexFirst >> indexSecond;

	if (indexFirst > (SIZE - 1) || indexSecond > (SIZE - 1))
	{
		cout << "Error\n";
		return 0;
	}

	if (indexFirst > indexSecond)
		swap(indexFirst, indexSecond);

	ChangeArrStr(str, SIZE, indexFirst, indexSecond);

	cout << str << endl;

	return 0;
}

void ChangeArrStr(char str[], int SIZE, int first, int second)
{
	char strArr[100]{};

	strncpy_s(strArr, SIZE, str, first);

	for (int i = second, j = first; i < SIZE; i++, j++)
	{
		strArr[j] = str[i];
	}

	str[0] = '\0';

	strcpy_s(str, SIZE, strArr);
}