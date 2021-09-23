#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nx, ny;
	
	printf("평면상의 x, y좌표를 입력하시오 : ");
	scanf("%d%d", &nx, &ny);

	if (nx >= 0)
	{
		if (ny >= 0)
		{
			printf("1 사분면\n");
		}
		else
		{
			printf("4 사분면\n");
		}
	}
	else
	{
		if (ny >= 0)
		{
			printf("2 사분면\n");
		}
		else
		{
			printf("3 사분면\n");
		}
	}



	system("pause");
	return 0;

}