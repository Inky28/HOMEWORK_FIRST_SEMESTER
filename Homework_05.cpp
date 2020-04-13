#include <iostream>
using namespace std;

void main()
{
	//TASK 01//

	int chislo = 0, i = 0;
	cout << "Vveditu chislo - " << endl;
	cin >> chislo;

	while (chislo >= i)
	{
		cout << "Chislo - " << i << endl;
		i++;
	}

	system("pause");

	//TASK 02//

	int chislo = 0, i = 0;
	cout << "Vveditu chislo - " << endl;
	cin >> chislo;

	while (true)
	{
		cout << "Chislo - " << i++ << endl;
		if (chislo < i)
		{
			break;
		}
	}
	system("pause");

	//TASK 03//

	int chislo = 0, i = 0;
	cout << "Vveditu chislo - " << endl;
	cin >> chislo;

	while (i <= chislo)
	{
		cout << "Chislo - " << chislo++ << endl;
		i++;
		if (chislo % 7 == 0)
		{
			cout << "Chislo - " << chislo << endl;
			break;
		}
	}
	system("pause");

	//TASK 04//

	int a = 0, b = 0, sum = 0, kil = 0;
	cout << "Vveditu 2 meshi diapazonu " << endl;
	cin >> a >> b;

	while (a <= b)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		if (a % 3 == 0)
		{
			kil++;
		}
		a++;
	}
	cout << "Suma parnuh chisel = " << sum << endl;
	cout << "Kilkist chisel cratnuh 3 = " << kil << endl;
	system("pause");

	//TASK 05//

	int chislo1 = 1, chislo2 = 0;
	cout << "Vvedit pershe chislo tablutci mnoshenya " << endl;
	cin >> chislo1;

	while (chislo1 < 9)
	{
		if (chislo1 < 0)
		{
			cout << "Nevirne chislo " << endl;
			break;
		}
		else
		{
			cout << chislo1 << " x " << chislo2 << " = " << chislo1 * chislo2 << endl;
		}
		if (chislo2 == 9)
		{
			break;
		}
		chislo2++;
	}
	system("pause");

	//TASK 06//

	int y = 0, x = 0, sum = 1, i = 0;
	cout << "Vveditu cile chislo X " << endl;
	cin >> x;
	cout << "Vveditu cile chislo Y " << endl;
	cin >> y;


	while (y > i)
	{
		sum *= x;
		i++;
	}
	cout << "Chislo = " << sum << endl;
	system("pause");

	//TASK 07//

	int numb = 0, i = 2, count = 0;
	cout << "Enter number" << endl;
	cin >> numb;

	while (i < numb)
	{
		if ((numb % i) == 0)
		{
			++count;
		}
		if (count == 0)
		{
			cout << "Simple " << endl;
			break;
		}
		else
		{
			cout << "Not Simple " << endl;
			break;
		}
		++i;
	}

	system("pause");
}