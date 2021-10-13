#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define END_CONDITION 0 //define ���� ���ڿ� �ǹ� �ο�

void TimeRandomSeed();
unsigned int nTimeSeedValue(void);
unsigned int nGenRandomNum(nRange);
void print_line(void);

int main(void)
{
	int nRange = 0;
	TimeRandomSeed();
	print_line();
	while (true)
	{
		
		printf("���ϴ� ������ ������ ���� �����Ϸ��� ���� + 1 �� �������� �Է��Ͻÿ� : "); // ������ �Է��� �� �Ǽ����� �ʵ��� ���� �߰�
		scanf_s("%d", &nRange);
		if (nRange == END_CONDITION) // 0�� ���� ���� ��ü�� 0���� �����ϱ� ������ ���� �������� �ʿ���� ���̶� �����Ͽ� ���α׷� ���� ������ ����
		{
			printf("\n���� ���� ���α׷� ����\n");
			print_line();
			return;
		}
		else if (nRange < END_CONDITION){ // ���� ������ 0���� �����ϱ� ������ 0 �̸��� �� �Է½� ���Է� ���� �ڵ� �߰�
			printf("\n 0 �̻��� ������ �Է� �����մϴ�.\n ���ǿ� �´� �������� �Է��ϼ���\n");
			print_line();
			continue;
		}
		else {
			printf(" TIME �Լ��� srand(seed) �� : %d\n\n", nTimeSeedValue()); //random number seed ���� ������ ������ ���� ������ �����ϱ����� �����ش�.
			int nResult = nGenRandomNum(nRange);
			printf(" 0 ~ ���ϴ� ���� ���� ������ �� : %d\n", nResult); // ���� ���� random number ����
			print_line();
		}
	}


	system("pause");
	return 0;
}

void TimeRandomSeed() // ��ǻ�� ���ο��� �ð������� �õ带 �ο��ϱ� ������ �Ű������� ��ȯ���� �ʿ����.
{
	srand((unsigned int)time(NULL)); // srand �Լ��� �õ尪�� �׻� ���ϴ� �ð� ������ �ش�
	return;							 // time �Լ��� 1970�� 1�� 1�� ���� ����� �ð��� �ʴ����� ��ȯ�ϴ� �Լ� => ���� �������� ���ü� ���� seed ���̴�.
}

unsigned int nTimeSeedValue(void) //���� �ð� �õ尪�� ������ �����ִ� time �Լ�
{
	unsigned int tnum = 0, TimeInformation = 0, TimeSecond = 0, TimeMinute = 0, TimeHour = 0, TimeDay = 0, TimeYear = 0;
	tnum = (unsigned int)(time)(NULL);
	TimeInformation = (unsigned int)(time)(NULL); // time �Լ��� �õ尪�� 1970�� 1�� 1�Ϻ��� �󸶳� �������� �����ִ� ���� �߰�
	TimeYear = TimeInformation / 31536000;
	TimeInformation %= 31536000;
	TimeDay = TimeInformation / 86400;
	TimeInformation %= 86400;
	TimeHour = TimeInformation / 3600;
	TimeInformation %= 3600;
	TimeMinute = TimeInformation / 60;
	TimeInformation %= 60;
	TimeSecond = TimeInformation;
	printf("\n TIME �Լ��� TIME INFORMATION : %d�� %d�� %d�ð� %d�� %d��\n", TimeYear, TimeDay, TimeHour, TimeMinute, TimeSecond);

	return tnum;
}

unsigned int nGenRandomNum(nRange) // n������ ������ŭ �������ڸ� �̰� �ʹٸ� n+1�� ���� �Է�
{
	unsigned int nRandomNum = 0;
	unsigned int nRand_func = rand();
	nRandomNum = ((unsigned int)(nRand_func) % (nRange));
	return nRandomNum;
}

void print_line() // ���α׷� ���� �� ���� �þ߸� ���� line �Լ� �߰�
{
	printf("--------------------------------------------------------------------------------");
}