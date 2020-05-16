#include<stdio.h>

int main (){
	int n , f,n1=0,n2=1;
	printf ("nhap so n :\n");
	scanf("%d",&n);
	if(n==0){
		printf ("fibonacci = 0");
	}else if(n>0){
		for(int i=1; i!=n ; i++){
		
		n1=n2;
		n2=f;
		f=n1+n2;
		}
		printf ("fibonaci thu %d la %d",n,f);
	
	} 
	return 0;
	
}
