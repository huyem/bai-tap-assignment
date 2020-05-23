#include<stdio.h>

int main (){
	int a,b,c;
		printf( "nhap a:\n");
		scanf("%f",&a);
		printf( "nhap b:\n");
		scanf("%f",&b);
		printf( "nhap c:\n");
		scanf("%f",&c);
		for (;!(a>0&&b>0&&c>0&&a+b>c && a+c>b && b+c>a);){
				printf( "nhap a:\n");
				scanf("%f",&a);
				printf( "nhap b:\n");
				scanf("%f",&b);
				printf( "nhap c:\n");
				scanf("%f",&c);
		}printf ("day la ba canh tam giac");
		}

