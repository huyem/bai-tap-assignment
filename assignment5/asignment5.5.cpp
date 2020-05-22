#include<stdio.h>

int main(){
	int n,x1=1,x2=1,x3=2;
	printf("nhap n =\n");
	scanf("%d",&n);
	if(n<2){
		printf("so can tim la 0\n");
	}
	if(n==2){
		printf("so can tim %d\d",x2);
	}
	for(;x2+x3<n;){
		x1=x2;
		x2=x3;
		x3=x1+x2;	
	}
	printf("so can tim la:%d\n",x3);
	}

		

