#include <stdio.h>
#include <stdlib.h>


double average(double dX, double dY);

int main(void)
{
	double dA = 1.5, dB = 3.4;
	double res;
	res = average(dA, dB);
	printf("%.1lf와 %.1lf의 평균값은 : %lf\n", dA, dB, res);

	system("pause");
	return 0;
}

double average(double dX, double dY)
{
	double temp;
	temp = (dX + dY) / 2;
	return temp;
}