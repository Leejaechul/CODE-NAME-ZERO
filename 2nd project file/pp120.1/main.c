#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int weight = 0;
	double height = 0;
	double dA = 0;
	double dB = 0;
	double dC = 0;
	int res;
	

	printf("몸무게(kg)와 키(cm) 입력 :");
	scanf("%d%lf", &weight, &height);

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
		printf("표준입니다.\n\n");
	}


	
	

	system("pause");
	return 0;
}