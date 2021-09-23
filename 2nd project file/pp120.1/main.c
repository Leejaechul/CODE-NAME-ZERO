#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double weight;
	double height;
	double dA;
	double dB;
	double dC;
	int res;
	

	printf("몸무게(kg)와 키(cm) 입력 :");
	scanf("%lf%lf", &weight, &height);

	dA = weight;
	dB = height / 100;
	dC = dA / dB / dB;
	res = (20.0 <= dC) && (dC < 25.0);

	if (res == 0)
	{
		printf("체중관리가 필요합니다.\n\n");
	}
	else
	{
		printf("표준입니다.\n");
	}


	
	

	system("pause");
	return 0;
}