#include <stdio.h>

int main (){
	int n;
	printf ("nhap so n :\n");
	scanf("%d",&n);
	float s =0 ;
	for(int n1=1;n1<=n;n1++){
		s+=(float)1/n1;	
	}	printf("ket qua la %f",s);	
	
}
