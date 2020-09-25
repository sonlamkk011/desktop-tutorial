#include<stdio.h>
int main(){
	int n;
	int a[100];
	printf("Nhap n:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu a[%d]: ",i);
		scanf("%d",&a[i]);
		}
	int min=a[0];
	for(int i=0;i<n;i++){
		if(min>a[i] && a[i]>0){
			min=a[i];
		}
	}
	printf("Phan tu duong nho nhat trong mang la: %d",min);
	return 0;}
