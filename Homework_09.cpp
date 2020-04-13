#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(nullptr));

	//TASK 01//

	const int SIZE = 10;
	char arr[SIZE]{};
	int count = 0;

	cout << "Enter symb\n";

	for (int i = 0; i < SIZE; i++)
	{
		cout << "arr[" << i << "] - ";
		cin >> arr[i];
		if (arr[i] >= 'A' && arr[i] <= 'Z')
			count++;
	}
	cout << "The big symb = " << count << endl;

	//TASK 02//

	const int SIZE = 25;
	int arr[SIZE]{};
	int i, nw;
	int kr = 47;

	for (i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % kr;
		cout << "arr[" << i << "] - " << arr[i] << endl;
	}

	cout << "Vvedit index elementa yakuy hochete zminutu \n";
	for (; ;)
	{
		cin >> i;
		if (i > SIZE - 1)
		{
			cout << "Nevirnuy vvid \n";
			cout << "Vvedit index elementa yakuy hochete zminutu \n";
		}
		else
		{
			cout << "Vvedit nove znachenya dly " << i << " elementa masivu \n";
			cout << "Nove znachenya mae bytu v diapazoni " << kr << endl;
			for (;;)
			{
				cin >> nw;
				if (nw > kr)
				{
					cout << "Nevirnuy vvid chislo bilshe " << kr << endl;
				}
				else
				{
					arr[i] = { nw };
					cout << "Nove znachenya dly arr[" << i << "] = " << arr[i] << endl;
					break;
				}
			}
			break;
		}
	}

	//TASK 03//

	const int SIZE = 10;
	int arr[SIZE]{};

	cout << "Enter the numb \n";

	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

	cout << "New Arr \n";

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] % 2 == 0)
		{
			for (int j = i; j < SIZE; j++)
			{
				arr[j] *= -1;
			}
			break;
		}
	}

	for (int i = SIZE - 1; i >= 0; --i)
	{
		if (arr[i] % 2 != 0)
		{
			for (int j = i; j >= 0; --j)
			{
				arr[j] *= -1;
			}
			break;
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] *= -1;
		cout << arr[i] << endl;
	}

	//TASK 04//

	const int SIZE = 15;
	char arr[SIZE]{ 'p','z','x','c','v','b','n','m','j','u','h','g','f','d','d' };

	for (int i = 0; i < SIZE; i++)
	{
		int min = arr[i];
		int index = i;
		for (int j = i + 1; j < 10; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				index = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}