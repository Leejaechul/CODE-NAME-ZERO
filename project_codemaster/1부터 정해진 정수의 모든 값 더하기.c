#include <stdio.h>
#include <stdlib.h>

void sum(int nN);
int main(void)
{
	sum(10);
	sum(100);
	system("pause");
	return 0;
}

void sum(int nN)
{
	int i, total=0;
	for (i = 1; i <= nN; i++)
	{
		total += i;
	}
	printf("1���� %d������ ���� : %d\n", nN, total);
	return;
}