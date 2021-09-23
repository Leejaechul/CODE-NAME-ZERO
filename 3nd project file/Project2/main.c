#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int nMonth;


	printf("몇 월인지 정수로 입력하시오 : ");
	scanf("%d", &nMonth);
	switch (nMonth)
	{
	case 1:
		printf("January\n"); break;
	case 2:
		printf("February\n"); break;
	case 3:
		printf("March\n"); break;
	case 4:
		printf("April\n"); break;
	case 5:
		printf("May\n"); break;
	case 6:
		printf("June\n"); break;
	case 7:
		printf("July\n"); break;
	case 8:
		printf("August\n"); break;
	case 9:
		printf("September\n"); break;
	case 10:
		printf("October\n"); break;
	case 11:
		printf("November\n"); break;
	default:
		printf("December\n"); break;
	}

	system("pause");

	return 0;

}