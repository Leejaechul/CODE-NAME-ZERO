#include<stdio.h>

int main() {

    unsigned int num;
    printf("������ �Է����ּ���\n");
    scanf_s("%d", &num);

    printf("2���� ��ȯ : ");
    //������ ���
    for (int i = 7; i >= 0; --i) { //8�ڸ� ���ڱ��� ��Ÿ��
        int result = num >> i & 1;
        printf("%d", result);
    }
}