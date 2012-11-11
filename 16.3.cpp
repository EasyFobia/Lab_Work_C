/*
y=pow(PI,2) / 8 - PI * abs(x) / 4
a < x < b
n=40 a=PI/5 b=PI
sum = cos(x*(2*i-1)) / pow(2*i-1,2)
+border=pow(10,-4)
+dif=2*PI/25
*/
#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

//введение числа "PI"
const double PI = 4.*atan(1.);
const float border = pow(10,-4);
const float step = 0.08 * PI;
const short int n=40;

int main()
{
	setlocale(LC_ALL, "Russian");

	double x,y,SN,SE,dif;
	short int i;

	cout << "Для х изменяющегося от a до b вычислить функцию:\n \
		y=pow(PI,2)/8-PI*abs(x)/4\n \
		используя ее разложение в степенной ряд для n и для заданной точности.\n \
		n=40, a=PI/5, b=PI, Sum=cos(x*(2*i-1))/pow(2*i-1,2), точность=pow(10,-4) \
		\n\n";
	
	for (x = PI * 0.2; x <= PI; x += step)
	{
		y = pow(PI,2) / 8 - PI * abs(x) / 4;

		for (i = 1, SN = 0; i<=n; i++)
		{
			dif = cos(x*(2*i-1)) / pow(2*i-1,2);
			SN += dif;
		}

		i = n;
		SE = SN;

		while (dif > border)
		{
			i++;
			dif = cos(x*(2*i-1)) / pow(2*i-1,2);
			SE += dif;
		}
		cout << "x=" << x << "\tSN=" << SN << "\tSE=" << SE << "\ty=" \
			<< y << endl;
	}
	
	return 0;
}
