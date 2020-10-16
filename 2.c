#include<stdio.h>
int kiemtra(int n,int a[],int k){
for(int i=0;i<n;i++){
	if(a[i]==k) 
	return 1;
}
return 0;
}
void input(int n,int a[]){
	printf("Nhap n: ");
	scanf("%d",&n);
int temp;
for(int i=0;i<n;i++){
	printf("Nhap a[%d]: ",i);
	scanf("%d",&temp);
		if(kiemtra(n,a,temp)==1){
		printf("Gia tri bi trung vui long nhap lai!\n");
}
else a[i]=temp;
}
}
void output(int n,int a[]){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);}
}
int main(){
int n,a[100];
input(n,a);
output(n,a);
}
