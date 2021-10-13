#include <stdio.h>
#include <stdlib.h>

int nFiboSequence(int nRamdomNum);

int main(void)
{
	int nRandomNum = 0, i = 0, count = 0; //랜덤넘버, for구문 i 값, 횟수를 세줄 변수 선언 및 초기화
	do {								 // 0 이하의 정수 값 입력시 재입력 반복문 설정
		printf("몇 번째 항까지 출력할까요? :");
		scanf_s("%d", &nRandomNum);
	} while (nRandomNum < 1);
	printf("결과 :");
	for (i = 0; i < nRandomNum; i++) { //결과창에 f(0)부터 nRandomNum값 횟수만큼 결과값 입력하게하는 반복문 설정
		printf("	%d," ,nFiboSequence(i)); // i 값은 0부터 시작 nRandomNum 만큼 횟수도 증가하며 증가하는 만큼 보여질 값의 횟수도 동일
		count++;
		if (count % 5 == 0) { //5번째 줄에 개행문자 입력 반복문 설정
			printf("\n");
		}
	}

	system("pause");
	return 0;
}

int nFiboSequence(int nRamdomNum) // 피보나치 수열이 코딩된 재귀함수 정의
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
	피보나치 수열은 다음과 같다;
	f(i + 1) = f(i) + f(i - 1) (i = 1, 2, 3 ... n);
	n번째 항까지 출력;
	ex) 몇 번째 항까지 출력할까요 ? 4;
		결과: 0, 1, 1, 2;
}*/