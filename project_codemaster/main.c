#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main(void)
{
	student a = { 315, "이재철" };

	printf("학번: %d, 이름: %s\n", a.num, a.name);
	system("pause");
	return 0;
}