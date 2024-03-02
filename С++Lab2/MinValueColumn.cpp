#include "MinValueColumn.h"
using namespace std;

void MinValueColumn(float arr[N][N])
{
	cout << "Вызов функции минимального значения столбца матрицы: | ";
	float minColArr[N]{};
	for (int i = 0; i < N; i++)
	{
		minColArr[i] = 999999;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			if (minColArr[j] > arr[i][j])
			{
				minColArr[j] = arr[i][j];
			}
	}
	for (int i = 0; i < N; i++)
	{
		cout << setw(6) << setprecision(5) << minColArr[i] << " | ";
	}
	cout << endl;
}
