#include<stdio.h>
#include<string.h>
void bai2(){
	int n;
    int donvi;
    int s = 0;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(;n!=0;){
        donvi = n % 10;
        s += donvi;
        n /= 10;
    }    
    printf("%d",s);
}
void bai3(){
	float a,b,c;
	printf("Nhap lan luot 3 canh a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	if(a+b>=c&&b+c>=a&&a+c>=b){
		printf("3 Canh vua nhap tao thanh 1 tam giac");
		printf("\nChu vi tam giac la:%0.1f",a+b+c);
		}
	else{
	printf("3 canh vua nhap khong la tam giac");
	}
}
void bai4(){
	float a,b,c,s,p;
	printf("Nhap lan luot 3 canh a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	if(a+b>=c&&b+c>=a&&a+c>=b){
		printf("3 Canh vua nhap tao thanh 1 tam giac");
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("\nDien tich tam giac la:%0.1f",s);
		}
	else{
	printf("3 canh vua nhap khong la tam giac");
	}}
void bai5(){
	int USCLN(int a, int b){
    if (b == 0) return a;
    return USCLN(b, a % b);
	}
	int a, b;
    printf("Nhap so nguyen duong a = ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong b = ");
    scanf("%d", &b);
    printf("USCLN cua %d va %d la: %d", a, b, USCLN(a, b));
}
void bai6(){
	int USCLN(int a, int b) {
    if (b == 0) return a;
    return USCLN(b, a % b);
}
	int BSCNN(int a, int b) {
    return (a * b) / USCLN(a, b);
}
 	int a, b;
    printf("Nhap so nguyen duong a = ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong b = ");
    scanf("%d", &b);
    printf("BSCLN cua %d va %d la: %d", a, b, BSCNN(a, b));
}
int main(){
	int chonbai;
	printf("\n1. Tim so nguyen to tiep theo cua n. \n2. Tinh tong cac chu so cua 1 so nguyen n. \n3. Tinh chu vi tam giac. \n4. Tinh dien tich tam giac. \n5. Tim UCLN cua 2 so. \n6. Tim BCNN cua 2 so.");
	printf("\nchon bai: ");
	scanf("%d",&chonbai);
	switch(chonbai){
		case 2:
		bai2();
		break;
		case 3:
		bai3();
		break;
		case 4:
			bai4();
			break;
		case 5:
			bai5();
			break;
		case 6:
			bai6();
		
	}	
	}
