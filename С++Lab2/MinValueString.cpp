#include "MinValueString.h"
using namespace std;

void MinValueString(float arr[N][N])
{
	cout << "Вызов функции минимального значения строки матрицы: | ";
	float minStrArr[N]{};
	for (int i = 0; i < N; i++)
	{
		minStrArr[i] = 999999;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			if (minStrArr[i] > arr[i][j])
			{
				minStrArr[i] = arr[i][j];
			}
	}
	for (int i = 0; i < N; i++)
	{
		cout << setw(6) << setprecision(5) << minStrArr[i] << " | ";
	}
	cout << endl;
}
