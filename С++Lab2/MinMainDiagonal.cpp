#include "MinMainDiagonal.h"
using namespace std;

void minMainDiagonalMatrix(float arr[N][N])
{
	float fMinMDM = arr[0][0];
	cout << "Вызвана функция минимума главной диагонали матрицы: ";
	for (int i = 0; i < N; i++) {
		if (fMinMDM > arr[i][i])
		{
			fMinMDM = arr[i][i];
		}
	}
	cout << fMinMDM << endl;
}
