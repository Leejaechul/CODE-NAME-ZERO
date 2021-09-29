#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	

	for (j = 2; j <= 9; j++)
	{
		for (i = 1; i <= 9; i++)
		{
			printf("%d * %d : %d\n", j, i, j * i);
		}
		
	}
	system("pause");
	return 0;

}