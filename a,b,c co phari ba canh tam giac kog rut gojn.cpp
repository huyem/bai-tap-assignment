// nhap ba soo va kt tam giac
#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("nhap a:\n");
    scanf("%d",&a);
    printf("nhap b:\n");
    scanf("%d",&b);
    printf("nhap c:\n");
    scanf("%d",&c);
    if(a > 0 &&  b > 0 && c>0 && a+b>c && a+c>b && b+c>a ){
    	printf("day la ba canh tam giac:\n");
    	int p = a+b+c; // khi ta nhap bien p sau  if p chi ton tai trong doan if{} goi la bien dia phuomg
    	printf("chu vi tam giac: %d:\n",p);
    	float p2 = (float)p/2;
    	float s = sqrt(p2*(p2-a)*(p2-b)*(p2-c)); 
		printf("dien tic tam giac %f",s);
	}else{
		printf("day kog phai ba canh tam giac");
	}
}
