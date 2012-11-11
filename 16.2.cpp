/*
epsilon = pow(10,-4)
a=lg(n!)*exp(-n*pow(n,1/2))
*/
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;


int main()
{
	setlocale ( LC_ALL,"Russian" );

	double sum = 0, diff,sum1,f = 1;
	unsigned short int n,i = 0;
	bool check = 0;
	
	while (check=0)
	{
		i++;
		f *= i;
		n = sqrt(static_cast<double>(i));
		diff = log10(f)/exp(static_cast<double>(i*n));
		sum += diff;
		cout << sum << endl;
		if (diff<0.0001) check = 1;
	}
	
	return 0;
}
