#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int i, j;

	for (j = 0; j < 5; j++)
	{
		for (i = 1; i < 2+j; i++)
		{
			printf("*");
		}
		printf("\n");
	}






	system("pause");
	return 0;

}