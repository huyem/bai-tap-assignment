#include<stdio.h>

int main(){
	int n;
	printf("nhap gia tri can tinh ");
	scanf("%d",&n);
	int giai_thua =1 ; 
	for (int n2=1; n2<=n;n2++){
		giai_thua=giai_thua*n2;
	} printf ( "ket qua la %d",giai_thua);
}
