#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
	int len=0;
	char s1[10];
	printf("���ڿ��� �Է��ϼ���:");
	scanf("%s",s1);

	printf("\n�Էµ� ���ڿ���\n\"%s\"\n�Դϴ�.\n",s1);

	for (int i = 0; s1[i] !='\0';i++) {
		len++;

	}

	printf("\n�Էµ� ���ڿ��� ����=%d", len);
}
