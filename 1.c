#include<stdio.h>
int main(){
	int n,x,tmp;
	printf("Nhap n:");
	scanf("%d",&n);
	printf("Nhap x:");
	scanf("%d",&x);
	int a[100];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu a[%d]",i);
		scanf("%d",&a[i]);
	}
	int min=x;
	for(int i=0;i<n;i++){
		if(a[i]<x){
		tmp = x-a[i];  	
		if(tmp<min){
			min=tmp;
		}
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]+min==x){
			printf("So trong mang co gia tri nho hon va gan x nhat la: %d",a[i]);
		}
	}
}
