#include <stdio.h>
int main(){
	int n,i=1,s=0;
	n=0;
	while(n<=100){
		s=s+i;
		i+=2;
		n++;
	}
	printf("S=%d",s);
}
