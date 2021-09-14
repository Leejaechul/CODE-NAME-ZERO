#include <stdio.h>

int main(void)
{
	printf("Be happy\n");
	printf("My friend\n");
	printf("Cow\rw\a\n");

	printf("%.0lf\n", 3.5);
	printf("%.1lf\n", 3.45);
	printf("%lf\n", 3.456);
	printf("%d과 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
	printf("wow\a\n");
	printf("%o\n", 10000);
	printf("%d\n", 100000);

	return 0;
}