#include <stdio.h>
#include <stdlib.h>

int main(void) // 2 이상의 정수 입력시 2부터 입력한 정수까지의 모든 소수를 출력하는 프로그램
{
	int n_over2 = 0; //2 이상의 정수 변수의 초기화
	do {
		printf("2 이상의 정수를 입력하세요 : ");
		scanf_s("%d", &n_over2);  // 2 이상의 정수값 변수에 초기화
	} while (n_over2 < 2); // 2 미만의 정수 입력시 입력 재시도

	int j = 0, i = 0, result_num = 0, count = 0; //for 구문 j와 i 변수 초기화, 나누어 떨어지는 수와 아닌수 구분할 변수명, 출력된 숫자의 개수를 세어줄 변수명
	for (j = 2; j <= n_over2; j++)
	{
		result_num = 1;
		for (i = 2; i < j; i++)  //만약 n_over2가 10이라면 나뉘는수는 "n_over2부터 2"까지, 나누는 수는 "n_over2-1부터 2"까지
		{
			if (j % i == 0) // 나누어 떨어지면 result_num 가 0이 되어 소수가 아닌 값으로 저장됨
			{
				result_num = 0;
				break;
			}
		}
		if (result_num == 1)
		{
			printf("	%d", j); // 숫자 사이의 공백 및 숫자가 5번 입력시 줄 바꿈
			count++;
			if (count % 5 == 0)
			{
				printf("\n");
			}
		}
	}

	system("pause");
	return 0;
}