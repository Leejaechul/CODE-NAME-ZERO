#include <stdio.h>
#include <stdlib.h>

int nFiboSequence(int nRamdomNum);

int main(void)
{
	int nRandomNum = 0, i = 0, count = 0; //�����ѹ�, for���� i ��, Ƚ���� ���� ���� ���� �� �ʱ�ȭ
	do {								 // 0 ������ ���� �� �Է½� ���Է� �ݺ��� ����
		printf("�� ��° �ױ��� ����ұ��? :");
		scanf_s("%d", &nRandomNum);
	} while (nRandomNum < 1);
	printf("��� :");
	for (i = 0; i < nRandomNum; i++) { //���â�� f(0)���� nRandomNum�� Ƚ����ŭ ����� �Է��ϰ��ϴ� �ݺ��� ����
		printf("	%d," ,nFiboSequence(i)); // i ���� 0���� ���� nRandomNum ��ŭ Ƚ���� �����ϸ� �����ϴ� ��ŭ ������ ���� Ƚ���� ����
		count++;
		if (count % 5 == 0) { //5��° �ٿ� ���๮�� �Է� �ݺ��� ����
			printf("\n");
		}
	}

	system("pause");
	return 0;
}

int nFiboSequence(int nRamdomNum) // �Ǻ���ġ ������ �ڵ��� ����Լ� ����
{
	int calculation = 0;
	if (nRamdomNum == 0) return 0;
	else if (nRamdomNum == 1 || nRamdomNum == 2) return 1;
	else {
		calculation = nFiboSequence(nRamdomNum - 1) + nFiboSequence(nRamdomNum - 2);
		return calculation;
	}
}
/* {
	printf f(0) = 0;
	printf f(1) = 1;
	f(2) = f(1) + f(0);
	f(3) = f(2) + f(1);
	f(4) = f(3) + f(2);
	f(5) = f(4) + f(3);
	f(6) = f(5) + f(4);
	nN = n1 + n0;
	printf nN;
	nVariableValueN = nN + (nN - 1)
}

{
	�Ǻ���ġ ������ ������ ����;
	f(i + 1) = f(i) + f(i - 1) (i = 1, 2, 3 ... n);
	n��° �ױ��� ���;
	ex) �� ��° �ױ��� ����ұ�� ? 4;
		���: 0, 1, 1, 2;
}*/