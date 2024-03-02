#include "AverageClosestValue.h"
#include "AverageValueMatrix.h"
using namespace std;

void avgClosestValue(float arr[N][N])
{
	cout << "Вызов функции вычисления наиболее близкого к среднему арифметическому числу матрицы: ";
	
	float avgCV = 0;
	float avgV = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			avgV += arr[i][j];
	}
	avgV = avgV / (N * N);
	float diff = 9999;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			if (fabs(avgV - arr[i][j]) < diff)
			{
				avgCV = arr[i][j];
				diff = fabs(avgV - arr[i][j]);
			}
	}
	cout << avgCV <<endl;
}
