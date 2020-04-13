/*
6.	���������� ������� �����. ���� ������� �����, ��� ���� �������.

���� ������� �����, �� ��� ���� �������.

������� �� ��ﳿ ������� ����� �������� ����� ������ � ������� �� �����
(���� ����� ���� ���� � ����� � ����� �� ������).
*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	const int SIZE = 100;
	char text[SIZE]{};
	char find[SIZE]{};
	char newText[SIZE]{};
	char newWord[SIZE]{};

	cout << "Enter text. Max - " << SIZE << " symbol: ";
	cin.getline(text, SIZE);

	cout << "Enter word for delete: ";
	cin >> find;

	cout << "Enter new word: ";
	cin >> newWord;

	char* temp = text;
	int wordSize = strlen(find);
	cout << "Word has size: " << wordSize << endl;

	while (!!strstr(temp, find))
	{
		int length = strstr(temp, find) - temp;

		strncat_s(newText, SIZE, temp, length);

		strcat_s(newText, SIZE, newWord);

		temp = &temp[length + wordSize];
	}

	if (!strstr(temp, find))
	{
		strcat_s(newText, SIZE, temp);
	}

	cout << newText << endl;

	return 0;
}