#include "MinHightPieceMatrix.h"
using namespace std;

void minHightPieceMatrix(float arr[N][N])
{
	int i, j;
	float fMaxHPM = arr[0][0];

	cout << "������� ������� �������� ����������������� �����: ";

	for (int i = 0; i < N; i++) {
		for (int j = 0 + i; j < N; j++) {
			if (fMaxHPM > arr[i][j])
			{
				fMaxHPM = arr[i][j];
			}
		}
	}
	cout << fMaxHPM << endl;
}
