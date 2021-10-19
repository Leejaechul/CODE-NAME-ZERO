#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define END_CONDITION 0 //define 으로 숫자에 의미 부여

void TimeRandomSeed();
unsigned int nGenRandomNum(nRange);

int main(void)
{
	int nRange = 0, nN = 0, i = 0;
	TimeRandomSeed();
	printf("주사위를 몇번 던질까요? : ");
	scanf_s("%d", &nN);
	for (i = 0; i < nN; i++) {
		nGenRandomNum(6);
	}


	system("pause");
	return 0;
}

void TimeRandomSeed() // 컴퓨터 내부에서 시간정보로 시드를 부여하기 때문에 매개변수와 반환값이 필요없다.
{
	srand((unsigned int)time(NULL)); // srand 함수의 시드값을 항상 변하는 시간 값으로 준다
	return;							 // time 함수는 1970년 1월 1일 이후 경과된 시간을 초단위로 반환하는 함수 => 절대 같은수가 나올수 없는 seed 값이다.
}


unsigned int nGenRandomNum(nRange) // n까지의 범위만큼 랜덤숫자를 뽑고 싶다면 n+1의 값을 입력
{
	unsigned int nRandomNum = 0;
	unsigned int nRand_func = rand();
	nRandomNum = ((unsigned int)(nRand_func) % (nRange));
	return nRandomNum;
}