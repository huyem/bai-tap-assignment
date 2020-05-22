#include<stdio.h>

int main(){
	int a,b;
	printf("nhap a=\n");
	scanf("%d",&a);
	printf("nhap b=\n");
	scanf("%d",&b);
	int a2=a,b2=b;
	if(a<0 ) a2== -a;
	if(b<0)  b2== -b;
	if(a==0) printf ("ucln %d \n",b2);
	else if(b==0) printf("ucln : %d \n",a2);
	int min =a;
	if(a>b) min=b;
	for(int i=a;i>0;i--){
		if(a%i==0 && b%i==0){
			printf("ucln: %d \n",i);
			break;
		}
	}
	
}
