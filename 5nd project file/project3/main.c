#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define END_CONDITION 7 //define 으로 숫자에 의미 부여
#define first_side 0
#define second_side 1
#define third_side 2
#define fourth_side 3
#define fifth_side 4
#define sixth_side 5
#define RandNum_Range 6

void TimeRandomSeed();
unsigned int nGenRandomNum(nRange);
int Cal_Count_SideN(int side_N, int Divide_Num);

int main(void)
{
	int nRange = 0, nN = 0, i = 0;
	int RandNumRes = 0;
	int Sum_SideNumber = 0;
	int Count_SideNumber1 = 0, Count_SideNumber2 = 0, Count_SideNumber3 = 0, Count_SideNumber4 = 0, Count_SideNumber5 = 0, Count_SideNumber6 = 0;
	int Nth_side = 0;
	int side_1 = 0, side_2 = 0, side_3 = 0, side_4 = 0, side_5 = 0, side_6 = 0;
	TimeRandomSeed();
	printf("주사위를 몇번 던질까요? : ");
	scanf_s("%d", &nN);
	for (i = 0; i < nN; i++) {
		RandNumRes = nGenRandomNum(RandNum_Range);
		switch (RandNumRes) {
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
	Count_SideNumber1 = Cal_Count_SideN(side_1, 1);
	Count_SideNumber2 = Cal_Count_SideN(side_2, 2);
	Count_SideNumber3 = Cal_Count_SideN(side_3, 3);
	Count_SideNumber4 = Cal_Count_SideN(side_4, 4);
	Count_SideNumber5 = Cal_Count_SideN(side_5, 5);
	Count_SideNumber6 = Cal_Count_SideN(side_6, 6);
	printf("1번 면이 나온 횟수 : %d\n", Count_SideNumber1);
	printf("1번 면이 나온 확률 : %d\n\n", Count_SideNumber1 / nN * 100);
	printf("2번 면이 나온 횟수 : %d\n", Count_SideNumber2);
	printf("2번 면이 나온 확률 : %d\n\n", Count_SideNumber2 / nN * 100);
	printf("3번 면이 나온 횟수 : %d\n", Count_SideNumber3);
	printf("3번 면이 나온 확률 : %d\n\n", Count_SideNumber3 / nN * 100);
	printf("4번 면이 나온 횟수 : %d\n", Count_SideNumber4);
	printf("4번 면이 나온 확률 : %d\n\n", Count_SideNumber4 / nN * 100);
	printf("5번 면이 나온 횟수 : %d\n", Count_SideNumber5);
	printf("5번 면이 나온 확률 : %d\n\n", Count_SideNumber5 / nN * 100);
	printf("6번 면이 나온 횟수 : %d\n", Count_SideNumber6);
	printf("6번 면이 나온 확률 : %d\n\n", Count_SideNumber6 / nN * 100);


	system("pause");
	return 0;
}

void TimeRandomSeed() // 컴퓨터 내부에서 시간정보로 시드를 부여하기 때문에 매개변수와 반환값이 필요없다.
{
	srand((unsigned int)time(NULL)); // srand 함수의 시드값을 항상 변하는 시간 값으로 준다
	return;							 // time 함수는 1970년 1월 1일 이후 경과된 시간을 초단위로 반환하는 함수 => 절대 같은수가 나올수 없는 seed 값이다.
}


unsigned int nGenRandomNum(int nRange) // n까지의 범위만큼 랜덤숫자를 뽑고 싶다면 n+1의 값을 입력
{
	unsigned int nRandomNum = 0;
	unsigned int nRand_func = rand();
	nRandomNum = ((unsigned int)(nRand_func) % (nRange));
	return nRandomNum;
}

int Cal_Count_SideN(int side_N, int Divide_Num) {
	int Calculation = 0;
	Calculation = side_N / Divide_Num;
	return Calculation;
}
