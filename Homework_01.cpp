# include <iostream>
using namespace std;

void main()
{
	//TASK 01//
	int R1, R2, R3;
	cout << "Enter R1" << endl;
	cin >> R1;
	cout << "Enter R2" << endl;
	cin >> R2;
	cout << "Enter R3" << endl;
	cin >> R3;
	cout << "Opir R0 = " << 1 / (1 / float(R1) + 1 / float(R2) + 1 / float(R3)) << endl;

	system("pause");

	//TASK 02//
	const float PI = 3.14;
	int l;
	cout << "Vvedity dovshuny okryjnosti" << endl;
	cin >> l;
	cout << "Ploshca kola S = " << PI * ((l / (2 * PI)) * (l / (2 * PI))) << endl;

	system("pause");

	//TASK 03//
	int v, t, a;
	cout << "Enter speed V" << endl;
	cin >> v;
	cout << "Enter time  T" << endl;
	cin >> t;
	cout << "Enter acceleration A" << endl;
	cin >> a;
	cout << "Distance S = " << (float)(v * t + (a * (t * t))) / 2 << endl;

	system("pause");
}