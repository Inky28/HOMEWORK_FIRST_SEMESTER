/*����: �������
2.�������� ������, ���� ������ �������� � �������� ���� �� ����� ������� cout.
�������� �� ������, ���� � ���������� ϲ.*/

#include <iostream>

#define Num(x)(x)
#define Show cout<<
#define PI 3.1415

using namespace std;

int main()
{
	int variable = 10;

	cout << Num(7) << endl;

	Show("hello world\n");

	Show(variable) << endl;

	Show(PI) << endl;

	return 0;
}