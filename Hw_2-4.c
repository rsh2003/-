#if 0
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

long int fact(int n) {
    printf("fact(%d) �Լ� ȣ��!\n", n);
    if (n <= 1) {
        printf("fact(1)�� 1 ��ȯ!\n");
        return 1;
    }
    else {
        int result = (n * fact(n - 1));
        printf("fact(%d)�� %d ��ȯ!\n",n, result);
        return result;

    }
}

int main(void) {
    int num = 0;
    printf("������ �Է��ϼ���:");
    scanf_s("%d", &num);
    long int result = fact(num);
    printf("\n%d�� ���丮�� ���� %ld�Դϴ�.\n", num, result);

    return 0;
}
#endif