#include <stdio.h>
#include <stdlib.h>

int rec_func(int n); //rec_func 함수 선언
int total = 0; // total 전역변수 선언

int main(void)
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
	total += n;
	if (n == 1) return total; // 카운트 값이 1이되면 return
	else
	{
		rec_func(n - 1); 
		return total;
	} // 재귀함수의 카운트를 세며 카운트 값이 수식에 동시에 적용되도록 활용
	
}