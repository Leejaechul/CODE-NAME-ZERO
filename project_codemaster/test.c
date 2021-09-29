#include <stdio.h>
#include <stdlib.h>

double centi_to_meter(double dCm);
int main(void)
{
	double dCm = 0.0,dM = 0.0;
	printf("값을 입력하시오(cm) :");
	scanf("%lf", &dCm);
	dM = centi_to_meter(dCm);
	printf("입력한 값의 미터(m)값은 : %.2lfm", dM);

	return 0;
}

double centi_to_meter(double dCm)
{
	double res;
	res = dCm / 100.0;
	return res;
}