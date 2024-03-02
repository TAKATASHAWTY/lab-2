#include "SumStringMatrix.h"
using namespace std;

void sumStringlMatrix(float arr[N][N])
{
	cout << "Вызов функции суммы строк матрицы: | ";
	float sumArr[N]{};
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			sumArr[i] += arr[i][j];
	}
	for (int i = 0; i < N; i++)
	{
		cout << setw(6) << setprecision(5) << sumArr[i] << " | ";
	}
	cout << endl;
}
