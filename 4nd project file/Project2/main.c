#include <stdio.h>
#include <stdlib.h>

int rec_func(int n); //rec_func 함수 선언

int main(void) // 1 이상의 정수 입력시 1부터 입력한 수까지의 합을 구하는 프로그램
{
	int num = 0, sum = 0; //num, sum 변수 선언 및 초기화
	do {  // 1 미만의 수 입력시 재 입력하도록 반복문 설정
		printf("1 이상의 정수 입력 : ");
		scanf_s("%d", &num);
	} while (num < 1);

	sum = rec_func(num); // rec_func 함수 호출
	printf("%d\n", sum);
	return 0;
}

int rec_func(int n) // rec_func 함수 정의
{
	int total = 0; // 모든 정수를 더해줄 변수 설정
	if (n == 1) return 1; // 카운트 값이 1이되면 1로 return, 카운트를 세는 역할도 동시에 함
	else
	{
		total = n + rec_func(n - 1); //수를 계속 더하는 재귀함수
		return total;
	} 
}