#include <iostream>

using namespace std;

void main()
{
	//TASK 01//
	int numb = 0;
	cout << "Enter number" << endl;
	cin >> (numb);
	cout << "Number = " << ++numb << endl;
	cout << "Number = " << ++numb << endl;
	cout << "Number = " << ++numb << endl;
	cout << "Number = " << ++numb << endl;
	cout << "Number = " << ++numb << endl;

	system("pause");

	//TASK 02//

	char symb;
	cout << "Enter your symb" << endl;
	cin >> symb;
	cout << "Your symb " << symb << endl;
	cout << "Next symb " << (char)(symb + 1) << endl;
	cout << "Next symb " << (char)(symb + 2) << endl;

	system("pause");

	//TASK 03//

	char symb;
	cout << "Enter your symb" << endl;
	cin >> symb;
	cout << "Your symb " << symb << endl;
	cout << "Next symb " << ++symb << endl;
	cout << "Next symb " << ++symb << endl;

	system("pause");

	//TASK 04//

	int numb1, numb2, numb3, numb4, numb5;
	float midnumb;

	cout << "Enter number 1" << endl;
	cin >> numb1;
	cout << "Enter number 2" << endl;
	cin >> numb2;
	cout << "Enter number 3" << endl;
	cin >> numb3;
	cout << "Enter number 4" << endl;
	cin >> numb4;
	cout << "Enter number 5" << endl;
	cin >> numb5;
	midnumb = (float)(numb1 + numb2 + numb3 + numb4 + numb5) / 5;

	cout << "Mid Number = " << (int)midnumb << endl;

	system("pause");

	//TASK 05//

	float l, h, w;
	cout << "-- Obyem paralelepipeda --" << endl;
	cout << "Vvedit vuhidni dani:" << endl;
	cout << "\tDovhuna (sm) -> ";
	cin >> l;
	cout << "\tShuruna (sm) -> ";
	cin >> w;
	cout << "\tVusota (sm) -> ";
	cin >> h;
	cout << "\tObyem: " << l * w * h << " sm.kyb"<< endl;

	system("pause");

	//TASK 06//

	int numb1 = 0, numb2 = 0;
	cout << "Enter numb 1 and numb 2" << endl;
	cin >> numb1 >> numb2;
	cout << (numb1 < numb2 ? numb1 : numb2) << endl;

	system("pause");

	//TASK 07//

	int numb = 0;
	cout << "Enter numb" << endl;
	cin >> numb;
	cout << (numb%3 ? "Bad " : "Good ") << endl;

	system("pause");

	//TASK 08//

	char symb1;
	char symb2 = 'y';

	cout << "Zemlya crugla ????" << endl;
	cout << "YES - y" << endl;
	cout << "NO - n" << endl;
	cin >> symb1;

	cout << (symb1 == symb2 ? "It's true " : "It's false ") << endl;

	system("pause");
}