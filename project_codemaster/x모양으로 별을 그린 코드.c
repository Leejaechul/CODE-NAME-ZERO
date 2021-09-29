#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int i, j;
	char ch = '*', nbsp = '\0';

	for (j = 0; j < 5; j++)
	{
		for (i = 0; i < 5; i++)
		{
			if (i == j)
			{
				printf("%c",ch);
			}
			else if (i + j == 4)
			{
				printf("%c",ch);
			}
			else
			{
				printf("%c",nbsp);
			}
		}
		printf("\n");
	}


	system("pause");
	return 0;

}