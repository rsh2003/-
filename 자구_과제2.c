#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
	int len=0;
	char s1[10];
	printf("문자열을 입력하세요:");
	scanf("%s",s1);

	printf("\n입력된 문자열은\n\"%s\"\n입니다.\n",s1);

	for (int i = 0; s1[i] !='\0';i++) {
		len++;

	}

	printf("\n입력된 문자열의 길이=%d", len);
}
