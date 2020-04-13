#include <iostream>
using namespace std;

void main()
{

	//TASK 01//

	int numb = 100, numb2 = 1;
	do
	{
		cout << numb << " " << numb2 << endl;
		numb--;
		numb2++;
	} while (numb >= 1);

	//TASK 02//

	int numb = 0, counter = 0;
	cout << "Enter number " << endl;
	cin >> numb;

	while (numb >= 0)
	{
		if (numb % 10 == 7 || numb % 10 == 1)
		{
			counter++;
		}
		numb--;
	}
	cout << "Kilkist yaki mayut ostanyu chufry 1 abo 7 - " << counter << endl;

	//TASK 03//

	int numb = 0, i = 1;
	cout << "Enter number " << endl;
	cin >> numb;

	while (i <= numb)
	{

		if (numb % i == 0)
		{
			cout << "Ok " << i << endl;
		}
		i++;
	}

	//TASK 04//

	int numb = 100, count = 0;
	while (numb <= 999)
	{

		if (numb / 100 == (numb / 10) % 10 || (numb / 10) % 10 == numb % 10 || numb / 100 == numb % 10)
		{
			count++;
		}
		numb++;
	}
	cout << "Chisla z 2 odnakovumu chiframu " << count << endl;

	//TASK 05//

	int i = 1, fac = 0, sum = 1;
	cout << "Vvedit factorial " << endl;
	cin >> fac;

	while (i <= fac)
	{
		sum = sum * i;
		i++;
	}
	cout << fac << "! = " << sum << endl;

	//TASK 06//

	bool exit = false;
	int money = 0, vubir = 0;
	const int COS1 = 10, COS2 = 20, COS3 = 30;

	do
	{
		cout << "Vvedit kilkist HRN " << endl;
		cin >> money;

		if (money >= COS3)
		{
			cout << "1. Atraksion " << endl;
			cout << "2. Atraksion " << endl;
			cout << "3. Atraksion " << endl;
		}
		else if (money >= COS2)
		{
			cout << "1. Atraksion " << endl;
			cout << "2. Atraksion " << endl;
		}
		else if (money >= COS1)
		{
			cout << "1. Atraksion " << endl;
		}
		else if (money < COS1)
		{
			cout << "Nedostatnuo HRN dlya byd yakogo atraksiony " << endl;
			cout << "GO HOME " << endl;
			break;
		}
		cout << "4. Vuhid " << endl;
		cout << "Vash vubir : " << endl;
		cin >> vubir;
		if (vubir > 4)
		{
			cout << "Nevirnuy vvid " << endl;
			break;
		}
		else
		{
			switch (vubir)
			{
			case 1:
			{
				cout << "Zaplatit 10 HRN " << endl;
				cout << "U vas zalushilos - " << money - 10 << " HRN " << endl;
				break;
			}
			case 2:
			{
				cout << "Zaplatit 20 HRN " << endl;
				cout << "U vas zalushilos - " << money - 20 << " HRN " << endl;
				break;
			}
			case 3:
			{
				cout << "Zaplatit 30 HRN " << endl;
				cout << "U vas zalushilos - " << money - 30 << " HRN " << endl;
				break;
			}
			case 4:
			{
				exit = true;
				break;
			}
			}
		}
	} while (!exit);

	system("pause");
}