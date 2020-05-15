#include <stdio.h>;

int main (){
	int a,b,c ;
	printf ("nhap so thu nhat:\n");
	scanf("%d",&a);
	printf ("nhap so thu hai:\n");
	scanf("%d",&b);
	printf ("nhap so thu ba:\n");
	scanf("%d",&c);
	if(a<=b && b<=c){
		printf("gia tri min la %d",a);
	}else{
		if(b<=a && a<=c){
			printf("gia tri min la %d",b);
		}else{
			if(c<=a && c<=b){
				printf ("gia tri min la %d",c);
			} 
		}
	}
		
}
