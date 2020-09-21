#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	float a,b,c,p,s;
	printf("Nhap lan luot 3 canh a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	if(a+b>=c&&b+c>=a&&a+c>=b){
		printf("3 Canh vua nhap tao thanh 1 tam giac");
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("\nChu vi tam giac la:%0.1f\nDien tich tam giac la:%0.1f",a+b+c,s);
		}
	else{
	printf("3 canh vua nhap khong la tam giac");
	}
}
