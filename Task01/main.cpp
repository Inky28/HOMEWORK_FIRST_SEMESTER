/*
1.	Є рядок «Пароль», значення якого «28Gd». Користувач вводить пароль.
Якщо паролі співпадають, то його «впускає в систему».
*/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	const int SIZE = 20;
	const char PASSWORD[] = "28Gd";
	char symb[SIZE]{};

	cout << "Enter password - [MAX " << SIZE - 1 << "] symbol\n";
	cin >> symb;

	if (!strcmp(PASSWORD, symb))
		cout << "Your password correct. OK\n";
	else
		cout << "Your password incorrect. ERROR\n";

	return 0;
}