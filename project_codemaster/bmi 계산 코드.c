#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	double weight, height, bmi;
	
	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf("%lf %lf", &weight, &height);
	height /= 100;
	bmi = weight / (height * height);
	printf("%s", (20.0 <= bmi ) && (bmi < 25.0) ? "ǥ���Դϴ�." : "ü�߰����� �ʿ��մϴ�.");


	return 0;
}