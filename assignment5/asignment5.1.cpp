#include<stdio.h>

int main(){
	int a , b , s=0;
	printf ("nhap so a\n",a);
	scanf("%d",&a);
	printf("nhap so b\n",b);
	scanf("%d",&b);
	if(a<b){
		for(int i = a ;i<=b;i++){
		s=s+i;	
		}printf("tong tu a den b :%d",s);
	}else {
			printf("kog thoa man yeu cau bai ra");
				}
	}
	
