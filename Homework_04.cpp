#include <iostream>
using namespace std;

void main()
{
	//TASK 01//

	char symb;
	cout << "Vvedit 1 symvol" << endl;
	cin >> symb;

	if (symb >= '0' && symb <= '9')
	{
		cout << "Vu vvelu chislo " << symb << endl;
	}
	else if (symb >= 'a' && symb <= 'z')
	{
		cout << "Vu vvelu bykvu " << symb << endl;
	}
	else if (symb >= 'A' && symb <= 'Z')
	{
		cout << "Vu vvelu veluky bykvu " << symb << endl;
	}
	else if (symb == '.' || symb == ',' || symb == '!' || symb == '?' || symb == ';' || symb == ':')
	{
		cout << "Vu vvelu znak punktuatsii " << symb << endl;
	}
	else
	{
		cout << "Vu vvelu inshuy znak - " << symb << endl;
	}
	system("pause");

	//TASK 02//

	float vartist;
	int t_operator;

	cout << "Vvedit vartist rozmovu v HRN " << endl;
	cin >> vartist;
	cout << "Vvedit z yacogo na yacuy operator telefonuete: " << endl;
	cout << "1 - Kyivstar - Kyivstar" << endl;
	cout << "2 - Kyivstar - Lifecell" << endl;
	cout << "3 - Kyivstar - Vodafone" << endl;
	cout << "4 - Lifecell - Kyivstar" << endl;
	cout << "5 - Lifecell - Lifecell" << endl;
	cout << "6 - Lifecell - Vodafone" << endl;
	cout << "7 - Vodafone - Kyivstar" << endl;
	cout << "8 - Vodafone - Lifecell" << endl;
	cout << "9 - Vodafone - Vodafone" << endl;
	cin >> t_operator;
	if (t_operator < 1 || t_operator > 9)
	{
		cout << "Pomulka. Vubranuy ne virnuy operator " << endl;
	}
	else
	{
		switch (t_operator)
		{
		case 1:
		{
			vartist = vartist * 1;
			break;
		}
		case 2:
		{
			vartist = vartist * 1.2;
			break;
		}
		case 3:
		{
			vartist = vartist * 1.3;
			break;
		}
		case 4:
		{
			vartist = vartist * 1.05;
			break;
		}
		case 5:
		{
			vartist = vartist * 1;
			break;
		}
		case 6:
		{
			vartist = vartist * 1.15;
			break;
		}
		case 7:
		{
			vartist = vartist * 1.025;
			break;
		}
		case 8:
		{
			vartist = vartist * 1.23;
			break;
		}
		case 9:
		{
			vartist = vartist * 1;
			break;
		}
		}
	}
	cout << "Vartist rozmovu = " << vartist << " HRN" << endl;

	system("pause");

	//TASK 03//

	int dohid = 0, b_dohid = 0, zapiznenya = 0, cod = 0, variant = 0, a = 0;
	cout << "MENU :" << endl;
	cout << "1 - Skilku codu maye napusatu Vasya " << endl;
	cout << "2 - Skilku Vasya moshe zapiznitus " << endl;
	cout << "3 - Skilku zaplatyat Vasi " << endl;
	cin >> variant;
	if (variant < 1 || variant > 3)
	{
		cout << "Pomulka. Nevirnuy vvid " << endl;
	}
	else
	{
		switch (variant)
		{
		case 1:
		{
			cout << "Vvedit bazhanuy dohid Vasi " << endl;
			cin >> b_dohid;
			cout << "Vvedit kilkist zapiznen Vasi " << endl;
			cin >> zapiznenya;
			/*cout << "Kilkist ryadkiv kodu yaki maye napusatu Vasya: ";*/
			a = (b_dohid - ((zapiznenya / 3) * 20));
			/*cout << a << endl;*/
			cod = (b_dohid * 2 + (b_dohid - a) * 2);
			/*cout << cod << endl;*/
			if (a < 0)
			{
				cout << "Nadto maluy dohid abo nadto bagato zapiznen " << endl;
			}
			else
			{
				cout << "Kilkist ryadkiv yaki potribno napusat Vasi - " << cod << endl;
			}
			break;
		}
		case 2:
		{
			cout << "Vvedit bazhanuy dohid Vasi " << endl;
			cin >> b_dohid;
			cout << "Vvedit kilkist ryadkiv codu " << endl;
			cin >> cod;
			zapiznenya = (((cod / 2) - b_dohid) * 3) / 20;
			if (zapiznenya < 0)
			{
				cout << "Nadto malo ryadkiv codu abo nadto veluca zarplata " << endl;
			}
			else
			{
				cout << "Vasya moshe zapiznutus - " << zapiznenya << endl;
			}
			break;
		}
		case 3:
		{
			cout << "Vvedit kilkist ryadkiv codu " << endl;
			cin >> cod;
			cout << "Vvedit kilkist zapiznen Vasi " << endl;
			cin >> zapiznenya;
			dohid = (cod / 2) - ((zapiznenya / 3) * 20);
			/*cout << dohid << endl;*/
			if (dohid < 0)
			{
				cout << "Nadto bagato zapiznen abo nadto malo ryadkiv codu " << endl;
			}
			else
			{
				cout << "Dohid Vasi - " << dohid << endl;
			}
			break;
		}
		}
	}
	system("pause");
}