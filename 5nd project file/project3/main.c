#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define END_CONDITION 999 // ���α׷� ���� ��� define
#define first_side 0	// ù��° ���� ��� define
#define second_side 1	// �ι�° ���� ��� define
#define third_side 2	// ����° ���� ��� define
#define fourth_side 3	// �׹�° ���� ��� define
#define fifth_side 4	// �ټ���° ���� ��� define
#define sixth_side 5	// ������° ���� ��� define
#define RandNum_Range 6	// �����ѹ� �Լ��� ���� �� define

void TimeRandomSeed();
unsigned int nGenRandomNum(nRange);
int Cal_Count_SideN(int side_N, int Divide_Num);

int main(void)
{
	int nRange = 0, nN = 0, i = 0;
	int RandNumRes = 0;
	int Count_SideNumber1 = 0, Count_SideNumber2 = 0, Count_SideNumber3 = 0, Count_SideNumber4 = 0, Count_SideNumber5 = 0, Count_SideNumber6 = 0;
	int side_1 = 0, side_2 = 0, side_3 = 0, side_4 = 0, side_5 = 0, side_6 = 0;
	char Percent = '%';		// % ��ȣ�� ����ϱ����� char�� ���� ����
	TimeRandomSeed();
	while (1) {
		printf("�ֻ����� ��� �������? \n���α׷��� �����Ϸ��� 999�� �Է��ϼ���\n");
		scanf_s("%d", &nN);
		if (nN == END_CONDITION) {
			return 0;
		}
		else if (nN <= 0) {
			printf("�߸��� ���� �Է��ϼ̽��ϴ�. �ٽ� �Է��� �ּ���\n\n");
			continue;
		}
		else {
			for (i = 0; i < nN; i++) {
				RandNumRes = nGenRandomNum(RandNum_Range);
				switch (RandNumRes) {		// swich ~ case ������ ��ȯ�� ���� ��� ����
				case first_side:
					side_1 += 1;
					break;
				case second_side:
					side_2 += 2;
					break;
				case third_side:
					side_3 += 3;
					break;
				case fourth_side:
					side_4 += 4;
					break;
				case fifth_side:
					side_5 += 5;
					break;
				case sixth_side:
					side_6 += 6;
					break;
				}
			}
			Count_SideNumber1 = Cal_Count_SideN(side_1, 1);			// ���Ѽ��� ������ ������ ������ Ƚ�� ����
			Count_SideNumber2 = Cal_Count_SideN(side_2, 2);
			Count_SideNumber3 = Cal_Count_SideN(side_3, 3);
			Count_SideNumber4 = Cal_Count_SideN(side_4, 4);
			Count_SideNumber5 = Cal_Count_SideN(side_5, 5);
			Count_SideNumber6 = Cal_Count_SideN(side_6, 6);
			printf("1�� ���� ���� Ƚ�� : %d\n", Count_SideNumber1);
			printf("1�� ���� ���� Ȯ�� : %.1lf%c\n\n", ((double)Count_SideNumber1 / (double)nN * 100), Percent);	// ����� Ƚ���� Ȯ�� ����
			printf("2�� ���� ���� Ƚ�� : %d\n", Count_SideNumber2);
			printf("2�� ���� ���� Ȯ�� : %.1lf%c\n\n", ((double)Count_SideNumber2 / (double)nN * 100), Percent);
			printf("3�� ���� ���� Ƚ�� : %d\n", Count_SideNumber3);
			printf("3�� ���� ���� Ȯ�� : %.1lf%c\n\n", ((double)Count_SideNumber3 / (double)nN * 100), Percent);
			printf("4�� ���� ���� Ƚ�� : %d\n", Count_SideNumber4);
			printf("4�� ���� ���� Ȯ�� : %.1lf%c\n\n", ((double)Count_SideNumber4 / (double)nN * 100), Percent);
			printf("5�� ���� ���� Ƚ�� : %d\n", Count_SideNumber5);
			printf("5�� ���� ���� Ȯ�� : %.1lf%c\n\n", ((double)Count_SideNumber5 / (double)nN * 100), Percent);
			printf("6�� ���� ���� Ƚ�� : %d\n", Count_SideNumber6);
			printf("6�� ���� ���� Ȯ�� : %.1lf%c\n\n", ((double)Count_SideNumber6 / (double)nN * 100), Percent);
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


unsigned int nGenRandomNum(int nRange) // n������ ������ŭ �������ڸ� �̰� �ʹٸ� n+1�� ���� �Է�
{
	unsigned int nRandomNum = 0;
	unsigned int nRand_func = rand();
	nRandomNum = ((unsigned int)(nRand_func) % (nRange));
	return nRandomNum;
}

int Cal_Count_SideN(int side_N, int Divide_Num) { // ���� ��ȣ�� �׿� �°� ������ �� �Ű����������� ��Ȯ�� Ƚ�� ���� �Լ� ����
	int Calculation = 0;
	Calculation = side_N / Divide_Num;
	return Calculation;
}
