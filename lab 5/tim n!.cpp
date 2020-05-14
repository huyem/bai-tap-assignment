#include<stdio.h>
int main(){
	int n;
	printf("nhap n:\n",n);
	scanf("%d",&n);
	int s=1;
	for(int n2=1;n2<=n;n2++){
		s=s*n2;
	
	}	printf("n!= %d",s);
}
