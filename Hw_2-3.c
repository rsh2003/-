#if 0
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	char student[2][3][20];

	for (int h = 0; h < 2; h++) {
		printf("학생 %d의 이름:", h + 1);
		gets(student[h][0]);
		printf("학생 %d의 전공:", h + 1);
		gets(student[h][1]);
		printf("학생 %d의 학번:", h + 1);
		gets(student[h][2]);
		printf("\n");
	}

	for (int i = 0; i < 2; i++) {
		printf("\n\n학생 %d\n", i + 1);
		for (int j = 0; j < 3; j++) {
			peintf("\n\t");
			for (int k = 0; k !='\0'; k++) {
				printf("%c", student[i][j][k]);
			}
		}
	}
	getchar();
}

#endif
