#include "SumHightPieceMatrix.h"
using namespace std;

void sumValueHightieceMatrix(float arr[N][N])
{
	cout << "Вызвана функция вычисления суммы верхнетреугольной части матрицы: ";
	float fAvgVHPM = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0 + i; j < N; j++) {
			fAvgVHPM += arr[i][j];
		}
	}
	cout << fAvgVHPM  << endl;
}
