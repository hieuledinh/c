// Nhập ba cạnh tam giác, kiểm tra ba cạnh đó có thỏa điều kiện hình thành tam giác không, in kết quả kiểm tra. 
#include <stdio.h>

int main () {
	int AB, AC, BC;

	printf("Nhap lan luot 3 canh muon kiem tra AB, AC, BC: ");
	scanf("%d %d %d", &AB, &AC, &BC);
	if ( AB> 0 && AC > 0 && BC > 0)
		if ((AB) < (AC + BC) && (AC) < (AB + BC) && (BC) < (AB + AC))
			printf("3 canh thoa dieu kien hinh thanh tam giac");
		else
			printf("3 canh khong thoa dieu kien hinh thanh tam giac");
	else 
		printf("ERROR"); 
}
	