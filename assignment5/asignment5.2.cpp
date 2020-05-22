#include<stdio.h>

int main (){
	int n;
	printf("nhap so n:\n",n);
	scanf ("%d",&n);
	int count=0;
	if (n==0) {
	count==1;
	printf("so chu so cua 0 la 1");
    }else if (n>0){
		do{
		for(int i=0;i<=n;i++){
			n=n/10;
			count++;
		}
	}while (n!=0) ;
	printf("so chu so cua %d la: %d\n",n,count);
}else if (n<0){
		     printf("day kog phai so nguyen duong");
			}
}
