#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nA, nB;
	int res;
	
	
	printf("두개의 정수 입력 : ");
	scanf("%d%d",&nA, &nB);

	res = nA % nB;

	if (res == 0)
	{
		printf("2번째 정수 %d가 1번째 정수 %d의 약수 입니다.\n", nB, nA);
	}
	else
	{
		printf("2번째 정수 %d가 1번째 정수 %d의 약수가 아닙니다.\n", nB ,nA);
	}

	

	system("pause");
	return 0;
}