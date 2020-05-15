#include <stdio.h>

int main(){
	int a,b;
	printf ("nhap so a \n",a);
	scanf("%d",&a);
	printf("nhap so b \n",b);
	scanf("%d ",&b);
	if(a>b || a==b){
	 float n=a/b;
		printf("ket qua %f",n);
	}else if(a<b){
		float n = a*b;
		printf(" ket qua la %f",n);
		
	}
}
