#include <stdio.h>
#include <stdlib.h>

void Combination_Iteration_Function(int n, int r);
int Combiation_Recursive_Function(int n, int r);
int Simple_Version_Combination_Iteration_Function1(int nNum);
int Simple_Version_Combination_Iteration_Function2(int n, int r);
#define END_CONDITION 0

int main(void)
{
	int n = 0, r = 0;
	while (1) { // 무한 반복문으로 계속 nCr 값을 계산할 수 있도록 코딩
		printf("이항계수 nCr을 계산할 n값과 r값을 정수로 입력하시오 : ");
		printf("\n이항계수 함수를 끝내고 싶다면 n값에 0을 입력하세요\n"); // 무한 루프를 빠져 나올수 있는 조건 출력
		scanf_s("%d%d", &n, &r);
		if (n == END_CONDITION) return; 	// n값에 0 입력 시 무조건 return	
		else if (n < 0 || r < 0 || r > n) { // n과 r의 기초 조건이 맞지 않을 시 다시 입력하게 예외설정
			printf("\n입력한 값을 확인하고 다시 입력하세요\n");
		}
		else { 
			Combination_Iteration_Function(n, r); //반복문 활용 함수
			printf("재귀함수를 활용한 nCr 값 : %d\n", Combiation_Recursive_Function(n, r)); //재귀함수 활용 함수
			printf("반복문과 재귀함수를 둘다 활용한 nCr 값 : %d\n\n", Simple_Version_Combination_Iteration_Function2(n, r)); //반복문 + 재귀함수
		}
	}

	system("pause");
	return 0;
}

void Combination_Iteration_Function(int n, int r) // 반복문 조합 함수 정의, nCr = n! / r!(n-r)!
{												 // ex) 6C4 일때 -> (6*5*4*3*2*1)/(4*3*2*1)(2*1)
	int i = 0, j = 0, k = 0;
	int result = 0, nFactorial = 1, rFactorial = 1, nMINUSrFactorial = 1;
	for (i = 1; i <= n; i++) {
		nFactorial *= i;
	}
	for (j = 1; j <= r; j++) {
		rFactorial *= j;
	}
	for (k = 1; k <= n-r; k++) {
		nMINUSrFactorial *= k;
	}
	result = nFactorial / (rFactorial * nMINUSrFactorial);
	printf("\n반복문을 활용한 nCr 값 : %d\n", result);
	return;
}

int Combiation_Recursive_Function(int n, int r)
{

	int calculation = 0; //재귀함수의 호출 횟수 조절
	if (r == 0 || r == n) {
		return 1;
	}
	else{
		calculation = Combiation_Recursive_Function(n - 1, r - 1) + Combiation_Recursive_Function(n - 1, r);
		return calculation;
	}
}

int Simple_Version_Combination_Iteration_Function1(int nNum)
{
	int nRes = 1;
	for (int i = 1; i <= nNum; i++) {
		nRes *= i;
	}
	return nRes;
}

int Simple_Version_Combination_Iteration_Function2(int n, int r)
{
	return (Simple_Version_Combination_Iteration_Function1(n)) / (Simple_Version_Combination_Iteration_Function1(r) * Simple_Version_Combination_Iteration_Function1(n - r));
}