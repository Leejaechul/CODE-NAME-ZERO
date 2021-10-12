#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double dEuclideanDistance(double nRandomX1, double nRandomY1, double nRandomX2, double nRandomY2);

int main(void)
{
	double dRandomX1 = 0.0, dRandomX2 = 0.0, dRandomY1 = 0.0, dRandomY2 = 0.0;

	printf("임의의 한 점의 좌표를 입력(x,y 좌표-실수값) : ");
	scanf("%d%d", &dRandomX1, &dRandomY1);
	printf("임의의 한 점의 좌표를 입력(x,y 좌표-실수값) : ");
	scanf("%d%d", &dRandomX2, &dRandomY2);
	printf("두 점사이의 거리 : %lf" ,dEuclideanDistance(dRandomX1, dRandomY1, dRandomX2, dRandomY2));

	system("pause");
	return 0;
}

double dEuclideanDistance(double X1, double Y1, double X2, double Y2)
{
	double calculation = 0.0, res = 0.0, dXvalue = 0.0, dYvalue = 0.0;
	dXvalue = (X1 - X2) * (X1 - X2);
	dYvalue = (Y1 - Y2) * (Y1 - Y2);
	calculation = dXvalue + dYvalue;
	res = sqrt(calculation);
	return res;
}