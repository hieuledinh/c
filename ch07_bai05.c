#include <stdio.h>

int main () {
	int AB, AC, BC;
	printf("Nhap lan luot 3 canh muon kiem tra AB, AC, BC: ");
	scanf("%d %d %d", &AB, &AC, &BC);
		if ((AB) < (AC + BC) && (AC) < (AB + BC) && (BC) < (AB + AC))
			// printf("3 canh thoa dieu kien hinh thanh tam giac");
			if (AB^2+AC^2==BC^2)
				printf("\nTam giac vuong tai A");
			else if (AC^2+BC^2==AB^2)
				printf("\nTam giac vuong tai C");
			else if (AB^2+BC^2==AC^2)
				printf("\nTam giac vuong tai B");
			else if (AB == AC)
				printf("\nTam giac can tai A");
			else if (AC == BC)
				printf("\nTam giac can tai C");
			else if (AB == BC)
				printf("\nTam giac can tai B");
			else 
				printf("\nTam giac thuong");
		else
			printf("3 canh khong thoa dieu kien hinh thanh tam giac");
}