#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nx, ny;
	
	printf("������ x, y��ǥ�� �Է��Ͻÿ� : ");
	scanf("%d%d", &nx, &ny);

	if (nx >= 0)
	{
		if (ny >= 0)
		{
			printf("1 ��и�\n");
		}
		else
		{
			printf("4 ��и�\n");
		}
	}
	else
	{
		if (ny >= 0)
		{
			printf("2 ��и�\n");
		}
		else
		{
			printf("3 ��и�\n");
		}
	}



	system("pause");
	return 0;

}