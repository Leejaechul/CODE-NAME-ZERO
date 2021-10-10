#include <stdio.h>
#include <stdlib.h>

void dM(void);

int main(void)
{
	dM();

	system("pause");
	return 0;
}

void dM(void)
{
	double dM, dCm;
	printf("cm ют╥б : ");
	scanf("%lf", &dCm);
	dM = dCm / 100.0;
	printf("meter value : %.2lf\n", dM);
	return;
}