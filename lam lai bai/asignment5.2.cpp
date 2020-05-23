#include<stdio.h>

int main(){
	int n;
	printf("nhap so nguyen duong n=:\n",n);
	scanf("%d",&n);
	int n2=n;
	int count=0 ;
	if(n==0){
	
	 printf("so chu so la 1");
	}else {
	
	for(;n2!=0;count++, n2/=10);
		printf("so chu so cua n=: %d",count);
	}
}
