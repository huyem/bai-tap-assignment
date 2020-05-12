#include <stdio.h>

int main (){
	int num;
	printf ("nhap so nguyen",num);
	scanf ("%d",num);
	if( num >= 0){
		int n1 = num ;
		int n2=0;
		for ( n2=0 ; n2<4 ; n2++){
			n2=n2*10+n1%10;
			n1=n1/10;
		} printf ("so nghich dao la %d",&n2);
	} else{
		printf("kog thoa man yeu cau");
	}
}
