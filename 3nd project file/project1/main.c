#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nA, nB;
	int res;
	
	
	printf("�ΰ��� ���� �Է� : ");
	scanf("%d%d",&nA, &nB);

	res = nA % nB;

	if (res == 0)
	{
		printf("2��° ���� %d�� 1��° ���� %d�� ��� �Դϴ�.\n", nB, nA);
	}
	else
	{
		printf("2��° ���� %d�� 1��° ���� %d�� ����� �ƴմϴ�.\n", nB ,nA);
	}

	

	system("pause");
	return 0;
}