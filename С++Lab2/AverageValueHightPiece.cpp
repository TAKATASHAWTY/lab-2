#include "AverageValueHightPiece.h"
using namespace std;

void avgValueHightieceMatrix(float arr[N][N])
{
	cout << "Вызвана функция вычисления среднего арифметического значения верхнетреугольной части матрицы: ";
	float fAvgVHPM = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0 + i; j < N; j++) {
			fAvgVHPM += arr[i][j];
		}
	}
	cout << fAvgVHPM / ((N * N) / 2 + (N / 2)) << endl;
}
