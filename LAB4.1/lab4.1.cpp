#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int  N, i;
	double S;
	cout << "N = "; cin >> N;
	S = 1;
	i = N;
	while (i <= 16 )
	{
		S *= (i * N) / (pow(i, 2) + pow(N, 2));
		i++;
	}
	cout << S << endl;
		S = 1 ;
	i = N;
	do {
		S *= (i * N) / (pow(i, 2) + pow(N, 2));
		i++;
	} while (i <= 16);
	cout << S << endl;
	S = 1;
	for (i = N; i <= 16; i++)
	{
		S *= (i * N) / (pow(i, 2) + pow(N, 2));
	}
	cout << S << endl;
	S = 1;
	for (i = 16; i >= N; i--)
	{
		S *= (i * N) / (pow(i, 2) + pow(N, 2));
	}
	cout << S << endl;
	return 0;
}