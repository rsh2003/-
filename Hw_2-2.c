# if 0
#include <stdio.h>
#define CRT_SECURE_NO_WARNING

int main(void) {
	char array[2][3][4];
	int num = 1;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++) {
				array[i][j][k] = num;
				printf("array[%d][%d][%d]=%d\n", i, j, k, array[i][j][k]);
				num++;
			}
		}
	}
}

#endif