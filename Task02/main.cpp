/*
2.	Користувач вводить текст в масив. Вивести на екран кількість символів, які ще можна записати в масив.
*/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	const int SIZE = 30;
	char str[SIZE]{};
	bool find = false;
	int otherSymb = 0;

	cout << "Enter text: ";
	cin.getline(str, SIZE);

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			otherSymb++;
			find = true;
		}
	}

	if (find)
	{
		cout << "You have TAB or SPACE. Their count: " << otherSymb << endl;
	}

	cout << "Our text: " << str << endl;

	size_t strLength = strlen(str);

	cout << "Free symbol - " << (SIZE - 1) - strLength << endl;

	return 0;
}