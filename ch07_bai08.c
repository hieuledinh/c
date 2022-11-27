#include <stdio.h>
#include <math.h>

int main () {
	float x,y;
	printf("Doi tu do Fahrenheit sang do Celcius");
	printf("\nMoi nhap do Fahrenheit : ");
	scanf("%f", &x);

	y = ((x-32)*5/9);

	printf("\nDo Celcius quy doi: %.2f", y);
// int main () {
// 	float x,y;
// 	printf("Doi tu do F sang do C");
// 	printf("\nMoi nhap do Fahrenheit (F): ");
// 	scanf("%f", &x);
// 	y = (5/9*(x-32));
// 	printf("\nDo Celcius (C) duoc quy doi la: %.2f", y);
}