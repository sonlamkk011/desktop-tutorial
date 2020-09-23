#include<stdio.h>
int songuyento(int n) {
    if (n < 2) {
        return 0;
    }
    int i;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
 int i, n;
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("Tat ca cac so nguyen to nho hon %d la: \n", n);
    if (n >= 2) {
        printf("%d ", 2);
    }
    for (i = 3; i < n; i+=2) {
        if (songuyento(i) == 1) {
            printf("%d ", i);
        }
    }
}
