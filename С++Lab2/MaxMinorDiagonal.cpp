#include "MaxMinorDiagonal.h"
using namespace std;

void maxMinorDiagonalMatrix(float arr[N][N])
{
	float fMinMDM = arr[0][4];
	cout << "������� ������� ��������� �������������� ��������� �������: ";
	for (int i = 0; i < N; i++) {
		if (fMinMDM < arr[i][4 - i])
		{
			fMinMDM = arr[i][4 - i];
		}
	}
	cout << fMinMDM << endl;
}
