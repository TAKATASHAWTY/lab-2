#include "MinMatrix.h"
using namespace std;

void minMatrix(float arr[N][N])
{
    int i, j;
    float fMin = arr[0][0];

    cout << "������� ������� ������ ������������ �������� � �������: ";

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        if (arr[i][j] < fMin)
        {
            fMin = arr[i][j];
        }
    }
    cout << fMin << endl;
}