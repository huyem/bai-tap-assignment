#include <stdio.h>

int main (){
	int n;
	do{
	printf("nhap so n:\n");
	scanf ("%d",&n);
}   while(n<=0);
	int n2=n,sum =0;
	for(;n2!=0; n2/=10){
		sum+=n2%10;
}   printf("tong cac chu so %d la %d \n",n,sum);
}
