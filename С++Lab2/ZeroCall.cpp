#include "ZeroCall.h"
using namespace std;

void printZero(int a)
{
	for (int i = 1; i <= a; i++)
	{
		cout << setw(8) << setprecision(5) << 0;
	}
}
