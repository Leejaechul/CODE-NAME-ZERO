#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define END_CONDITION 0 //define ���� ���ڿ� �ǹ� �ο�

void TimeRandomSeed();
unsigned int nGenRandomNum(nRange);

int main(void)
{
	int nRange = 0, nN = 0, i = 0;
	TimeRandomSeed();
	printf("�ֻ����� ��� �������? : ");
	scanf_s("%d", &nN);
	for (i = 0; i < nN; i++) {
		nGenRandomNum(6);
	}


	system("pause");
	return 0;
}

void TimeRandomSeed() // ��ǻ�� ���ο��� �ð������� �õ带 �ο��ϱ� ������ �Ű������� ��ȯ���� �ʿ����.
{
	srand((unsigned int)time(NULL)); // srand �Լ��� �õ尪�� �׻� ���ϴ� �ð� ������ �ش�
	return;							 // time �Լ��� 1970�� 1�� 1�� ���� ����� �ð��� �ʴ����� ��ȯ�ϴ� �Լ� => ���� �������� ���ü� ���� seed ���̴�.
}


unsigned int nGenRandomNum(nRange) // n������ ������ŭ �������ڸ� �̰� �ʹٸ� n+1�� ���� �Է�
{
	unsigned int nRandomNum = 0;
	unsigned int nRand_func = rand();
	nRandomNum = ((unsigned int)(nRand_func) % (nRange));
	return nRandomNum;
}