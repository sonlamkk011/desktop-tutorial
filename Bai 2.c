#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	int n;
	float s;
	printf("Nhap n:");
	scanf("%d",&n);
	s=0;
	for(int i=1;i<=n;i++){
		s+=(1.0/i);
	}
	printf("Tong S la: %.2f",s);
	getch();
	return 0;
}
