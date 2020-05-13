#include<stdio.h>

int main (){
	int a,b,c;
		printf( "nhap a:\n",a);
		scanf("%f",&a);
		printf( "nhap b:\n",b);
		scanf("%f",&b);
		printf( "nhap c:\n",c);
		scanf("%f",&c);
		for (;a+b>c || a+c>b || b+c>a;){
				printf( "nhap a:\n",a);
				scanf("%f",&a);
				printf( "nhap b:\n",b);
				scanf("%f",&b);
				printf( "nhap c:\n",c);
				scanf("%f",&c);
		}printf ("day la ba canh tam giac");
		}

