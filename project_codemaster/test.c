#include <stdio.h>
#include <stdlib.h>

double centi_to_meter(double dCm);
int main(void)
{
	double dCm = 0.0,dM = 0.0;
	printf("���� �Է��Ͻÿ�(cm) :");
	scanf("%lf", &dCm);
	dM = centi_to_meter(dCm);
	printf("�Է��� ���� ����(m)���� : %.2lfm", dM);

	return 0;
}

double centi_to_meter(double dCm)
{
	double res;
	res = dCm / 100.0;
	return res;
}