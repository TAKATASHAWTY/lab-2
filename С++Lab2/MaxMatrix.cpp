#include "MaxMatrix.h"
using namespace std;

void maxMatrix(float arr[N][N])
{
	int i, j;
	float fMax = arr[0][0];

	cout << "������� ������� ������ ������������� �������� � �������: ";

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			if (arr[i][j] > fMax)
			{
				fMax = arr[i][j];
			}
	}
	cout << fMax << endl;
}
