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
	while (1) { // ���� �ݺ������� ��� nCr ���� ����� �� �ֵ��� �ڵ�
		printf("���װ�� nCr�� ����� n���� r���� ������ �Է��Ͻÿ� : ");
		printf("\n���װ�� �Լ��� ������ �ʹٸ� n���� 0�� �Է��ϼ���\n"); // ���� ������ ���� ���ü� �ִ� ���� ���
		scanf_s("%d%d", &n, &r);
		if (n == END_CONDITION) return; 	// n���� 0 �Է� �� ������ return	
		else if (n < 0 || r < 0 || r > n) { // n�� r�� ���� ������ ���� ���� �� �ٽ� �Է��ϰ� ���ܼ���
			printf("\n�Է��� ���� Ȯ���ϰ� �ٽ� �Է��ϼ���\n");
		}
		else { 
			Combination_Iteration_Function(n, r); //�ݺ��� Ȱ�� �Լ�
			printf("����Լ��� Ȱ���� nCr �� : %d\n", Combiation_Recursive_Function(n, r)); //����Լ� Ȱ�� �Լ�
			printf("�ݺ����� ����Լ��� �Ѵ� Ȱ���� nCr �� : %d\n\n", Simple_Version_Combination_Iteration_Function2(n, r)); //�ݺ��� + ����Լ�
		}
	}

	system("pause");
	return 0;
}

void Combination_Iteration_Function(int n, int r) // �ݺ��� ���� �Լ� ����, nCr = n! / r!(n-r)!
{												 // ex) 6C4 �϶� -> (6*5*4*3*2*1)/(4*3*2*1)(2*1)
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
	printf("\n�ݺ����� Ȱ���� nCr �� : %d\n", result);
	return;
}

int Combiation_Recursive_Function(int n, int r)
{

	int calculation = 0; //����Լ��� ȣ�� Ƚ�� ����
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