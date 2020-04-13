#include <iostream>
using namespace std;

void main()
{
	int variant = 0;
	cout << "Vuberit varian vuvody " << endl;
	cin >> variant;
	if (variant <= 10 && variant >= 1)
	{
		switch (variant)
		{
		case 1:
		{
			cout << "Variant A " << endl;
			int size = 13;
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (j >= i)
						cout << " *";
					else
						cout << "  ";
				}
				cout << endl;
			}
			break;
		}
		case 2:
		{
			cout << "Variant B " << endl;
			int size = 13;
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i >= j)
						cout << "* ";
					else
						cout << " ";
				}
				cout << endl;
			}
			break;
		}
		case 3:
		{
			cout << "Variant V " << endl;
			int size = 11;
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i <= j && i + j <= size - 1)
						cout << "* ";
					else
						cout << "  ";
				}
				cout << endl;
			}
			break;
		}
		case 4:
		{
			cout << "Variant G " << endl;
			int size = 11;
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i >= j && i + j >= size - 1)
						cout << "* ";
					else
						cout << "  ";
				}
				cout << endl;
			}
			break;
		}
		case 5:
		{
			cout << "Variant D " << endl;
			int size = 13;

			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i <= j && i + j <= size - 1 || i >= j && i + j >= size - 1)
						cout << "* ";
					else
						cout << "  ";
				}
				cout << endl;
			}
			break;
		}
		case 6:
		{
			cout << "Variant E " << endl;
			int size = 13;

			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i >= j && i + j <= size - 1 || i <= j && i + j >= size - 1)
						cout << "* ";
					else
						cout << "  ";
				}
				cout << endl;
			}
			break;
		}
		case 7:
		{
			cout << "Variant H " << endl;
			int size = 11;
			for (int i = 0; i < size; i++)
			{

				for (int j = 0; j < size; j++)
				{
					if (i >= j && i + j <= size - 1)
						cout << "* ";
					else
						cout << "  ";
				}
				cout << endl;
			}
			break;
		}
		case 8:
		{
			cout << "Variant Z " << endl;
			int size = 11;
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i <= j && i + j >= size - 1)
						cout << "* ";
					else
						cout << "  ";
				}
				cout << endl;
			}
			break;
		}
		case 9:
		{
			cout << "Variant I " << endl;
			int size = 13;
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i + j <= size - 1)
						cout << " *";
					else
						cout << "  ";
				}
				cout << endl;
			}
			break;
		}
		case 10:
		{
			cout << "Variant K " << endl;
			int size = 13;
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i + j >= size - 1)
						cout << " *";
					else
						cout << "  ";
				}
				cout << endl;
			}
			break;
		}
		}
	}
	else
	{
		cout << "Nevirnuy vvid " << endl;
	}

	system("pause");
}