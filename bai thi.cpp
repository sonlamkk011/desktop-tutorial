#include <stdio.h>
#include<math.h>
float perimeter(int a,int b,int c){
    return a+b+c;
}
float area(int a, int b, int c) {
    float p = perimeter(a, b, c) / 2.0;
    return sqrt(p*(p - a)*(p - b)*(p - c));
}
int main() {
    float a,b,c;
    printf("Nhap canh a: ");
    scanf("%f",&a);
    printf("Nhap canh b: ");
    scanf("%f",&b);
    printf("Nhap canh c: ");
    scanf("%f",&c);
    if(a+b>=c&&b+c>=a&&a+c>=b){
        printf("\n3 Canh vua nhap tao thanh 1 tam giac");
        printf("\nDien tich tam giac la:%.2f\nChu vi tam giac la: %.2f\n",area(a,b,c),perimeter(a,b,c));
        }
    else{
    printf("3 canh vua nhap khong la tam giac");
    }}



