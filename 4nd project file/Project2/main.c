#include <stdio.h>
#include <stdlib.h>

int rec_func(int n); //rec_func �Լ� ����
int total = 0; // total �������� ����

int main(void)
{
	int num = 0, sum = 0; //num, sum ���� ���� �� �ʱ�ȭ
	do {  // 1 �̸��� �� �Է½� �� �Է��ϵ��� �ݺ��� ����
		printf("1 �̻��� ���� �Է� : ");
		scanf_s("%d", &num);
	} while (num < 1);

	sum = rec_func(num); // rec_func �Լ� ȣ��
	printf("%d\n", sum);
	return 0;

}

int rec_func(int n) // rec_func �Լ� ����
{
	total += n;
	if (n == 1) return total; // ī��Ʈ ���� 1�̵Ǹ� return
	else
	{
		rec_func(n - 1); 
		return total;
	} // ����Լ��� ī��Ʈ�� ���� ī��Ʈ ���� ���Ŀ� ���ÿ� ����ǵ��� Ȱ��
	
}