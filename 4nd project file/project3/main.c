#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	int nN = 1, n1 = 1;
	int nRandomNum = 0, i = 0;
	printf("몇 번째 항까지 출력할까요? :");
	scanf_s("%d", &nRandomNum);
	for (i = 0; i < nRandomNum; i++)
	{
		nN = nN + (nN - 1);
		printf("%d", nN);
	}

	system("pause");
	return 0;
}
{
	printf f(0) = 0;
	printf f(1) = 1;
	f(2) = f(1) + f(0);
	f(3) = f(2) + f(1);
	f(4) = f(3) + f(2);
	f(5) = f(4) + f(3);
	f(6) = f(5) + f(4);
	nN = n1 + n0;
	printf nN;
	nVariableValueN = nN + (nN - 1)
}

{
	피보나치 수열은 다음과 같다;
	f(i + 1) = f(i) + f(i - 1) (i = 1, 2, 3 ... n);
	n번째 항까지 출력;
	ex) 몇 번째 항까지 출력할까요 ? 4;
		결과: 0, 1, 1, 2;
}