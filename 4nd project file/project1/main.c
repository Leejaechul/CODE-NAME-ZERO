#include <stdio.h>
#include <stdlib.h>

int main(void) // 2 �̻��� ���� �Է½� 2���� �Է��� ���������� ��� �Ҽ��� ����ϴ� ���α׷�
{
	int n_over2 = 0; //2 �̻��� ���� ������ �ʱ�ȭ
	do {
		printf("2 �̻��� ������ �Է��ϼ��� : ");
		scanf_s("%d", &n_over2);  // 2 �̻��� ������ ������ �ʱ�ȭ
	} while (n_over2 < 2); // 2 �̸��� ���� �Է½� �Է� ��õ�

	int j = 0, i = 0, result_num = 0, count = 0; //for ���� j�� i ���� �ʱ�ȭ, ������ �������� ���� �ƴѼ� ������ ������, ��µ� ������ ������ ������ ������
	for (j = 2; j <= n_over2; j++)
	{
		result_num = 1;
		for (i = 2; i < j; i++)  //���� n_over2�� 10�̶�� �����¼��� "n_over2���� 2"����, ������ ���� "n_over2-1���� 2"����
		{
			if (j % i == 0) // ������ �������� result_num �� 0�� �Ǿ� �Ҽ��� �ƴ� ������ �����
			{
				result_num = 0;
				break;
			}
		}
		if (result_num == 1)
		{
			printf("	%d", j); // ���� ������ ���� �� ���ڰ� 5�� �Է½� �� �ٲ�
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