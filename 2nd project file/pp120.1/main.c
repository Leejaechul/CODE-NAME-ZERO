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
	

	printf("������(kg)�� Ű(cm) �Է� :");
	scanf("%lf%lf", &weight, &height);

	dA = weight;
	dB = height / 100;
	dC = dA / dB / dB;
	res = (20.0 <= dC) && (dC < 25.0);

	if (res == 0)
	{
		printf("ü�߰����� �ʿ��մϴ�.\n\n");
	}
	else
	{
		printf("ǥ���Դϴ�.\n");
	}


	
	

	system("pause");
	return 0;
}