/*
5.	���������� ������� �����. ���� ������� �����, ��� ���� ��������.
�������� �� ��ﳿ ����� ����� � ����� � ������� ���� �� �����.
*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	const int SIZE = 100;
	char text[SIZE]{};
	char newText[SIZE]{};
	char word[SIZE]{};

	cout << "Enter text. Max - " << SIZE << " symbol: ";
	cin.getline(text, SIZE);

	cout << "Enter word for delete: ";
	cin >> word;

	int wordSize = strlen(word);
	cout << "Word has size: " << wordSize << endl;

	char* temp = text;

	while (!!strstr(temp, word))
	{
		int length = strstr(temp, word) - temp;

		strncat_s(newText, SIZE, temp, length);

		temp = &temp[length + wordSize];
	}

	if (!strstr(temp, word))
	{
		strcat_s(newText, SIZE, temp);
	}

	cout << newText << endl;

	return 0;
}