#include <stdio.h>
#include <stdlib.h>

int fruit(int n);
int sum(int n);

int main(void)
{
	printf("%d",sum(10));

	return 0;
}

int fruit(int n)
{
	if (n == 1) return 1;
	else {
		return n + fruit(n - 1);
	}
}

int sum(int n)
{
	if (n == 1) return 1;
	else {
		return n + sum(n - 1);
	}
}