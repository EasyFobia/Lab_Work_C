// 1) ((a-b)^3-(a^3-3b*((a)^2)))/(b^3-3ab^2)

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale ( LC_ALL,"Russian" );
	float a = 1000,b = 0.0001,c,d,e,res;
	double A = 1000,B = 0.0001,C,D,E,RES;

	c = pow(a-b,3);
	d = pow(a,3)-3*pow(a,2)*b;
	e = pow(b,3)-3*a*pow(b,2);
	res = (c-d)/e;

	C = pow(A-B,3);
	D = pow(A,3)-3*pow(A,2)*B;
	E = pow(B,3)-3*A*pow(B,2);
	RES = (C-D)/E;

	cout << "\n Ответ при float\t=" << res \
		<< "\n Ответ при double\t=" << RES;
	cin.get();

	return 0;
}
