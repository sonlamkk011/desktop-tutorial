#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    printf("Nhap chuoi: ");
        scanf("%s",&a);
    char temp;    
	int s=strlen(a);
    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
        printf("Chuoi sau khi sap xep la: %s",a);
    return 0;
}
