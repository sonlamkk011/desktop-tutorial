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
	int max=0;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			dem++;
				if(dem>max)
				{
					max=dem;
				}	
			
		}
		else
		{	
           dem=0;
		}
	}
	printf("So luong cac so duong lien tiep nhau nhieu nhat la: %d",dem);
	}	
