#include<stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int sum=0;
	printf("Cac uoc cua n la: ");
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("%d ",i);
			sum+=i;
		}
	}printf("\nTong cac uoc la: %d",sum);
}
