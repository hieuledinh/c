#include <stdio.h>

int main () {
	char str;
	printf("Nhap ki tu: ");
	scanf("%c", &str);

	if (str >= 'a' && str <= 'z') {
		str = str - 32;
	}
	else if (str >= 'A' && str <= 'Z') {
		str = str + 32;
	}
	else {
		str = str;
		printf("Day la mot ki so"); 
	}
	printf("\nKi tu thay doi: %c", str);
}
