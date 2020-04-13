#include <iostream>
using namespace std;

void main()
{
	//TASK 01//

	const int NUM = 10;
	int arr[NUM]{};

	cout << "Zapovnit masuv. Vvedit chisla " << endl;
	for (int i = 0; i < NUM; i++)
	{
		cin >> arr[i];
	}
	cout << "Vu vvelu " << endl;
	for (int i = 0; i < NUM; i++)
	{
		if (arr[i] < 0)
		{
			arr[i] *= -1;
		}
		cout << arr[i] << endl;
	}

	//TASK 02//

	const short NUM = 7;
	long arr[NUM]{ 2, 4, 6, 8, 99, 64, 543 };
	long sum = 0;

	for (int i = 0; i < NUM; i++)
	{
		if (arr[i] % 2 == 0)
		{
			sum += arr[i];
		}
	}
	cout << "Suma parnuh chisel = " << sum << endl;

	//TASK 03//

	const int NUM = 30;
	long arr[NUM]{};
	int s = 1;

	for (int i = 0; i < NUM; i++)
	{
		arr[i] = s;
		s *= 2;
	}
	for (int i = 0; i < NUM; i++)
	{
		cout << "Elementu masuvy - " << i << " " << arr[i] << endl;

	}
	for (int i = NUM - 1; i >= 0; i--)
	{
		cout << "Elementu masuvy u obernenomu napramky - " << i << " " << arr[i] << endl;
	}

	//TASK 04//

	const int NUM = 5;
	const int AR2 = 10;
	int arr1[NUM]{};
	int arr2[NUM]{};
	int arr10[AR2]{};

	cout << "Vveditu chisla dlya 1 masuva " << endl;
	for (int i = 0; i < NUM; i++)
	{
		cin >> arr1[i];
	}
	cout << "Vveditu chisla dlya 2 masuva " << endl;
	for (int i = 0; i < NUM; i++)
	{
		cin >> arr2[i];
	}
	for (int i = 0; i < NUM; i++)
	{
		arr10[i] = arr1[i];
		arr10[i + 5] = arr2[i];
	}
	cout << "Masuv na 10 elementiv " << endl;
	for (int i = 0; i < AR2; i++)
	{
		cout << arr10[i] << endl;
	}
	int t = 0;
	for (int i = 0; i < AR2 - 1; i++)
	{
		for (int j = i; j >= 0; j--)
		{
			if (arr10[j] < arr10[j + 1])
			{
				t = arr10[j];
				arr10[j] = arr10[j + 1];
				arr10[j + 1] = t;
			}
		}
	}
	cout << "Sortovanuy masiv " << endl;
	for (int i = 0; i < AR2; i++)
	{
		cout << arr10[i] << endl;
	}

	//TASK 05//

	const int SIZE = 5;
	float arr[SIZE]{};
	float res = 0;

	cout << "Zapovnit masiv v formati - 0.0 " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << "Vash masiv " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
	cout << "Vidzerkalenuy masiv " << endl;

	for (int i = 0; i < SIZE; i++)
	{
		if (float(arr[i]) == int(arr[i]))
			cout << arr[i] << ".0" << endl;
		else
		{
			res = ((arr[i] - int(arr[i])) * 10) + ((arr[i] - (arr[i] - int(arr[i]))) / 10);
			arr[i] = res;
			cout << arr[i] << endl;
		}
	}

	//TASK 06//

	const int SIZE = 15;
	char arr[SIZE]{ 'a','b','c','d','e','q','w','r','t','y','u','i','o','p','s' };
	char symb;
	int numb = 0;

	cout << "Sprobuy vgadatu sumvol masuvy " << endl;
	cin >> symb;
	for (int i = 0; i < SIZE; i++)
	{
		if (symb == arr[i])
		{
			cout << "Vu vgadalu sumvol " << endl;
			cout << "Indeks mavusy " << i << endl;
			break;
		}
		else if (arr[SIZE - 1] == arr[i])
		{
			cout << "Probacte vu ne vgadaly sumvol " << endl;
			cout << "Sprobuete she raz ? " << endl;
			cout << "1 - yes " << endl;
			cout << "2 - no (EXIT) " << endl;
			cin >> numb;
			if (numb == 1)
			{
				cout << "Sprobuy znovy vgadatu sumvol masuvy" << endl;
				cin >> symb;
				i = 0;
			}
			else if (numb == 2)
			{
				break;
			}
		}
	}

	system("pause");
}