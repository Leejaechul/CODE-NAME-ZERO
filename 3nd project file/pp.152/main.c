#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int num1, num2;
	char ch;
	int res;
	
	printf("��Ģ���� �Է�(����) : ");
	scanf("%d%c%d", &num1, &ch, &num2);

	if (ch == '+')
	{
		res = num1 + num2;
		printf("%d%c%d=%d", num1, ch, num2, res);
	}
	else if (ch == '-')
	{
		res = num1 - num2;
		printf("%d%c%d=%d", num1, ch, num2, res);
	}
	else if (ch == '*')
	{
		res = num1 * num2;
		printf("%d%c%d=%d", num1, ch, num2, res);
	}
	else
	{
		res = num1 / num2;
		printf("%d%c%d=%d", num1, ch, num2, res);
	}

}