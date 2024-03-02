#include "MinLowPieceMatrix.h"
using namespace std;

void minLowPieceMatrix(float arr[N][N])
{
	setlocale(0, "");
	cout << "Вызвана функция минимума нижнетреугольной части матрицы: ";
	float fMaxLPM = arr[0][0];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			if (fMaxLPM > arr[i][j]) {
				fMaxLPM = arr[i][j];
			}
		}
	}
	cout << fMaxLPM << endl;
}
