#include <stdio.h>

int main () {
	int i,j;
	for (i = 1; i <= 9; i++) {
		printf("Bang cuu chuong %d\n", i);
		for (j = 1; j < 10; j++) {
			printf("\t%d x %d = %d\n",i,j,i*j);
		}
	}
	}

