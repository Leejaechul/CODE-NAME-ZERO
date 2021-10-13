#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define END_CONDITION 0 //define 으로 숫자에 의미 부여

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
		
		printf("원하는 범위의 무작위 수를 생성하려면 범위 + 1 의 정수값을 입력하시오 : "); // 범위를 입력할 때 실수하지 않도록 설명 추가
		scanf_s("%d", &nRange);
		if (nRange == END_CONDITION) // 0은 난수 범위 자체가 0부터 시작하기 때문에 범위 값에서는 필요없는 값이라 생각하여 프로그램 종료 값으로 설정
		{
			printf("\n난수 생성 프로그램 종료\n");
			print_line();
			return;
		}
		else if (nRange < END_CONDITION){ // 난수 범위가 0부터 시작하기 때문에 0 미만의 값 입력시 재입력 강조 코드 추가
			printf("\n 0 이상의 정수만 입력 가능합니다.\n 조건에 맞는 정수값을 입력하세요\n");
			print_line();
			continue;
		}
		else {
			printf(" TIME 함수의 srand(seed) 값 : %d\n\n", nTimeSeedValue()); //random number seed 값의 정보를 맨위에 먼저 난수를 생성하기전에 보여준다.
			int nResult = nGenRandomNum(nRange);
			printf(" 0 ~ 원하는 범위 내의 무작위 값 : %d\n", nResult); // 범위 안의 random number 생성
			print_line();
		}
	}


	system("pause");
	return 0;
}

void TimeRandomSeed() // 컴퓨터 내부에서 시간정보로 시드를 부여하기 때문에 매개변수와 반환값이 필요없다.
{
	srand((unsigned int)time(NULL)); // srand 함수의 시드값을 항상 변하는 시간 값으로 준다
	return;							 // time 함수는 1970년 1월 1일 이후 경과된 시간을 초단위로 반환하는 함수 => 절대 같은수가 나올수 없는 seed 값이다.
}

unsigned int nTimeSeedValue(void) //현재 시간 시드값이 얼마인지 보여주는 time 함수
{
	unsigned int tnum = 0, TimeInformation = 0, TimeSecond = 0, TimeMinute = 0, TimeHour = 0, TimeDay = 0, TimeYear = 0;
	tnum = (unsigned int)(time)(NULL);
	TimeInformation = (unsigned int)(time)(NULL); // time 함수의 시드값을 1970년 1월 1일부터 얼마나 지났는지 보여주는 수식 추가
	TimeYear = TimeInformation / 31536000;
	TimeInformation %= 31536000;
	TimeDay = TimeInformation / 86400;
	TimeInformation %= 86400;
	TimeHour = TimeInformation / 3600;
	TimeInformation %= 3600;
	TimeMinute = TimeInformation / 60;
	TimeInformation %= 60;
	TimeSecond = TimeInformation;
	printf("\n TIME 함수의 TIME INFORMATION : %d년 %d일 %d시간 %d분 %d초\n", TimeYear, TimeDay, TimeHour, TimeMinute, TimeSecond);

	return tnum;
}

unsigned int nGenRandomNum(nRange) // n까지의 범위만큼 랜덤숫자를 뽑고 싶다면 n+1의 값을 입력
{
	unsigned int nRandomNum = 0;
	unsigned int nRand_func = rand();
	nRandomNum = ((unsigned int)(nRand_func) % (nRange));
	return nRandomNum;
}

void print_line() // 프로그램 리딩 시 편한 시야를 위해 line 함수 추가
{
	printf("--------------------------------------------------------------------------------");
}