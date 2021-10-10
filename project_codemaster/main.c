#include <stdio.h>

int main()
{
    int num, tmp, count = 0;
    printf("소수 출력 프로그램입니다.\n");
    printf("2 이상의 정수를 입력해주세요: ");
    scanf("%d", &num);
    if (num < 2) { //2 이상의 정수를 입력하지 않았을 때 
        printf("2 이상의 정수를 입력하지 않으셨습니다.\n다시 입력해주세요.");
    }

    for (int i = 2; i <= num; i++)
    {
        tmp = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0) //num-1 값을 모두 나눠서 0이 되면 (=소수가 아니다) 
            {
                tmp = 0;
                break;     //빠져나옴 
            }
        }

        if (tmp == 1) //소수인 값들 
        {
            printf("%3d ", i); //출력하고 (%3d는 숫자 사이의 간격을 띄우기 위함 )
            count++;
            if (count % 5 == 0) //숫자 5개가 출력되면 
            {
                printf("\n"); //줄바꿈 
            }
        }

    }
}