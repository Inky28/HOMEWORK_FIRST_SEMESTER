/*����: �������� �������
1. �������� ��������� �������, ��� ������ ����� � ���� �������
� ������� ���� ������� � ���������� ��������.*/

#include <iostream>

using namespace std;

inline int ReturnSumArr(int arr[], const int SIZE);

int main()
{
	const int SIZE = 10;
	int arr[SIZE]{};

	cout << "Sum - " << ReturnSumArr(arr, 10) << endl;

	return 0;
}

inline int ReturnSumArr(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = (i + 1) * 10;
	}
	return arr[0] + arr[SIZE - 1];
}