#include <stdio.h>
#include <math.h>

int main (){
	int a,b,c ;
	printf ("nhap a:\n");
	scanf("%d",&a);
	printf ("nhap b:\n");
	scanf("%d",&b);
	printf ("nhap c:\n");
	scanf("%d",&c);
if(a>0){
	if(b>0){
		if(c>0){
			if(a+b>c&&a+c>b&&b+c>a){
				int p=a+b+c;
				printf ("chu vi tam giac la %d \n",p);
				float p2=p/2;
				float s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
				printf("dien tich tam giac %f",s);												
			}
		}
	}
}else {
	printf("day kog phai ba canh tam giac");
}
}
