#include <stdio.h>

int main () {
    // int n,i;
    // float tong,tong1,tong2;
    // tong = 0;
    // tong1 = 1;
    // tong2 = 0;
    
    // printf("Nhap n= ");
    // scanf("%d", &n);

    // for (i=1;i<=n;i++) {
    //     tong1 = tong1*(float)i ;
    //     tong2 += (float)i;
    //     tong += (tong2)/(tong1);
    // }
    //     printf("Tong cua bieu thuc %f", tong);
    int n;
    float i, tong, tong1, tong2, s;
    printf("Nhap n = ");
    scanf("%d", &n);
    tong1 = 1;
    tong = 0;
    tong2=1;
    for (i = 1; i <= n; i++) {
        tong1 += i;
        for (i=1;i <= tong1;i++) {
        tong2 = tong2*i;
        tong += tong2  ; 
}
    }
    printf("Tong cua bieu thuc S = %f", tong);
}
