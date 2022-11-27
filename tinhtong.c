// S=(1)! + (1+2)! + (1+2+..n)!
#include <stdio.h>
#include <math.h>

int giaithua(int n) {
    if (n==1||n==0){
        return 1;
    }
    else {
        return n*giaithua(n-1);
    }
}

// int tong(int n) {
    // int s;
    // s=0;
    // // giaithua=1;
    // // tong1=0;
    // for (int i=1;i<=n;i++) {
    //     s += i;
    //         // for (int j = 1; j<=s;j++) {
    //         //     giaithua*=j;
    //         //     tong1+=giaithua;
    //         // }
    // // int kq = giaithua (s);
    // }
    // int kq = giaithua (s);
    // return kq;
// }

// // int giaithua(int n) {
// //     for (int i = s; i>=1;i--)

// }

int main () {
    int n;
    do {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while (n <= 0);
    // printf("Nhap n = ");
    // scanf("%d", &n);
    // printf("S = %d", tong(n));
    int s;
    s=0;
    // giaithua=1;
    // tong1=0;
    for (int i=1;i<=n;i++) {
        s += i;
            // for (int j = 1; j<=s;j++) {
            //     giaithua*=j;
            //     tong1+=giaithua;
            // }
    // int kq = giaithua (s);
    }
    int kq = giaithua (s);
    printf("Tong cua bieu thuc = %d", tong(n));
}