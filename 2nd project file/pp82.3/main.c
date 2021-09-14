#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch;

	printf("문자입력: ");
	scanf("%c", &ch);
	printf("%c문자의 아스키 코드 값은 %d입니다.", ch, ch);
	
	

	system("pause");
	return 0;
}