#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main(void)
{
	student a = { 315, "����ö" };

	printf("�й�: %d, �̸�: %s\n", a.num, a.name);
	system("pause");
	return 0;
}