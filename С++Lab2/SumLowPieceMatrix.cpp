#include "SumLowPieceMatrix.h"
using namespace std;

void sumValuelowPieceMatrix(float arr[N][N])
{
	cout << "������� ������� ���������� ����� ���������������� ����� �������: ";
	float fAvgVLPM = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			fAvgVLPM += arr[i][j];
		}
	}
	cout << fAvgVLPM << endl;
}
