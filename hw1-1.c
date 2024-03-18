#include <stdio.h>

int main(void)
{

	char string[4][14] = { "Korea","Seoul","Mapo","152번지 2/3" };
	char* pum[4] = {"Korea","Seoul","Jongno","152번지 2/3"};

	for (int i = 0; i < 4;i++) {
		printf("%s\n", string[i]);

	};

	printf("\n\n\n");

	for (int j = 0; j < 4; j++) {
		printf("%s\n", pum[j]);
	}

	return 0;

}




