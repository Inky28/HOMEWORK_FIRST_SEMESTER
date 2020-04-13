/*
3.	Користувач вводить текст. А потім вводить 2 індекси.
Скопіювати в новий масив все, що находиться між цими індексами (включаючи їх).
*/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	const int SIZE = 50;
	char str[SIZE]{};
	char newArr[SIZE]{};

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

	for (int i = indexFirst, j = 0; i <= indexSecond; i++, j++)
	{
		newArr[j] = str[i];
	}

	cout << newArr << endl;

	return 0;
}