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
	

	printf("������(kg)�� Ű(cm) �Է� :");
	scanf("%d%lf", &weight, &height);

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
		printf("ǥ���Դϴ�.\n\n");
	}


	
	

	system("pause");
	return 0;
}