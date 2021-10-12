#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double dEuclideanDistance(double X1, double Y1, double X2, double Y2); //��Ŭ����� �Ÿ� �Լ� ����

int main(void)
{
	double dRandomX1 = 0.0, dRandomX2 = 0.0, dRandomY1 = 0.0, dRandomY2 = 0.0; //�Ǽ������� ������ �ʱ�ȭ
	
	printf("������ �� ���� ��ǥ�� �Է�(x,y ��ǥ-�Ǽ���) : ");
	scanf("%lf%lf", &dRandomX1, &dRandomY1);
	printf("������ �� ���� ��ǥ�� �Է�(x,y ��ǥ-�Ǽ���) : ");
	scanf("%lf%lf", &dRandomX2, &dRandomY2);
	printf("�� �������� �Ÿ� : %lf\n", dEuclideanDistance(dRandomX1, dRandomY1, dRandomX2, dRandomY2)); //��Ŭ����� �Լ� ȣ��
	
	system("pause");
	return 0;
}

double dEuclideanDistance(double X1, double Y1, double X2, double Y2)
{
	double calculation = 0.0, res = 0.0, dXvalue = 0.0, dYvalue = 0.0;
	dXvalue = (X1 - X2) * (X1 - X2);
	dYvalue = (Y1 - Y2) * (Y1 - Y2);
	calculation = dXvalue + dYvalue;
	res = sqrt(calculation); //������ �Լ� ȣ��
	return res;
}