#include <iostream>
using namespace std;

void main()
{
	//TASK 01//

	int numb = 0;

	cout << "Vvedit 6-tu znachne chislo" << endl;
	cin >> numb;
	if (99999 >= numb || numb > 999999)
		cout << "Nevirnuy vvid" << endl;
	else
		if (numb % 10 + (numb / 10) % 10 + (numb / 100) % 10 == ((numb / 1000) % 10 + (numb / 10000) % 10 + (numb / 100000) % 10))
		{
			cout << "Schasluve chislo" << endl;
		}
		else
		{
			cout << "NO. Ne schaslive chislo" << endl;
		}

	system("pause");

	//TASK 02//

	int numb = 0;
	int a, b, c, d;

	cout << "Vvedit 4-tu znachne chislo" << endl;
	cin >> numb;
	cout << "Vu vvelu = " << numb << endl;

	if (999 >= numb || numb > 9999)
	{
		cout << "Nevirnuy vvid" << endl;
	}
	else
	{
		a = numb % 10;
		b = (numb / 10) % 10;
		c = (numb / 100) % 10;
		d = (numb / 1000) % 10;
		cout << "Nove chislo = " << c << d << a << b << endl;
	}
	system("pause");

	//TASK 03//

	int a, b, c, d, e, f, g;
	cout << "Chislo" << endl;
	cin >> a;
	cout << "Chislo" << endl;
	cin >> b;
	cout << "Chislo" << endl;
	cin >> c;
	cout << "Chislo" << endl;
	cin >> d;
	cout << "Chislo" << endl;
	cin >> e;
	cout << "Chislo" << endl;
	cin >> f;
	cout << "Chislo" << endl;
	cin >> g;

	if (a < b)
		a = b;
	if (a < c)
		a = c;
	if (a < d)
		a = d;
	if (a < e)
		a = e;
	if (a < f)
		a = f;
	if (a < g)
		a = g;

	cout << "Maxumalne chislo = " << a << endl;

	system("pause");

	//TASK 04//

	int a;
	cout << "Enter number" << endl;
	cin >> a;
	int b;
	cin >> b;
	if (a < b)
		a = b;
	cin >> b;
	if (a < b)
		a = b;
	cin >> b;
	if (a < b)
		a = b;
	cin >> b;
	if (a < b)
		a = b;
	cin >> b;
	if (a < b)
		a = b;
	cin >> b;
	if (a < b)
		a = b;

	cout << "Max " << a << endl;

	system("pause");

	//TASK 05//

	float distance1, distance2, weight = 0, fuel_cost = 0, max_distance = 0;
	float const CAPACITY = 300;
	cout << "Enter distance between A and B " << endl;
	cin >> distance1;
	cout << "Enter distance between B and C " << endl;
	cin >> distance2;
	cout << "Enter weight of cargo " << endl;
	cin >> weight;
	if (weight > 2000)
		cout << "Can`t fly. Max weight" << endl;
	if (weight >= 0 && weight <= 500)
	{
		fuel_cost = 1;
		max_distance = CAPACITY / fuel_cost;
		cout << "Makcumalnuy polit pru vazi 0-500 kg = " << max_distance << " km" << endl;
		if (max_distance <= distance1)
			cout << "Paluva ne vustachit do tochky B" << endl;
		else
		{
			cout << "Litak zmohe she provetitu = " << max_distance - distance1 << " km" << endl;
			if (distance2 >= max_distance + (max_distance - distance1))
				cout << "Paluva ne vustachit do tochky C" << endl;
			else
				cout << "Potribno dozapravitu " << (distance2 - (max_distance - distance1)) * fuel_cost << " litriv\n";
		}
	}
	if (weight > 500 && weight <= 1000)
	{
		fuel_cost = 4;
		max_distance = CAPACITY / fuel_cost;
		cout << "Makcumalnuy polit pru vazi 500-1000 kg = " << max_distance << " km" << endl;
		if (max_distance <= distance1)
			cout << "Paluva ne vustachit do tochky B" << endl;
		else
		{
			cout << "Litak zmohe she provetitu = " << max_distance - distance1 << " km" << endl;
			if (distance2 >= max_distance + (max_distance - distance1))
				cout << "Paluva ne vustachit do tochky C" << endl;
			else
				cout << "Potribno dozapravitu " << (distance2 - (max_distance - distance1)) * fuel_cost << " litriv\n";
		}
	}
	if (weight > 1000 && weight <= 1500)
	{
		fuel_cost = 7;
		max_distance = CAPACITY / fuel_cost;
		cout << "Makcumalnuy polit pru vazi 1000-1500 kg = " << max_distance << " km" << endl;
		if (max_distance <= distance1)
			cout << "Paluva ne vustachit do tochky B" << endl;
		else
		{
			cout << "Litak zmohe she provetitu = " << max_distance - distance1 << " km" << endl;
			if (distance2 >= max_distance + (max_distance - distance1))
				cout << "Paluva ne vustachit do tochky C" << endl;
			else
				cout << "Potribno dozapravitu " << (distance2 - (max_distance - distance1)) * fuel_cost << " litriv\n";
		}
	}
	if (weight > 1500 && weight <= 2000)
	{
		fuel_cost = 9;
		max_distance = CAPACITY / fuel_cost;
		cout << "Makcumalnuy polit pru vazi 1500-2000 kg = " << max_distance << " km" << endl;
		if (max_distance <= distance1)
			cout << "Paluva ne vustachit do tochky B" << endl;
		else
		{
			cout << "Litak zmohe she provetitu = " << max_distance - distance1 << " km" << endl;
			if (distance2 >= max_distance + (max_distance - distance1))
				cout << "Paluva ne vustachit do tochky C" << endl;
			else
				cout << "Potribno dozapravitu " << (distance2 - (max_distance - distance1)) * fuel_cost << " litriv\n";
		}
	}
	system("pause");
}