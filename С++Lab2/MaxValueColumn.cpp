#include "MaxValueColumn.h"
using namespace std;

void MaxValueColumn(float arr[N][N])
{
	cout << "����� ������� ������������� �������� ������� �������: | ";
	float maxColArr[N]{};
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			if (maxColArr[j] < arr[i][j])
			{
				maxColArr[j] = arr[i][j];
			}
	}
	for (int i = 0; i < N; i++)
	{
		cout << setw(6) << setprecision(5) << maxColArr[i] << " | ";
	}
	cout << endl;
}
