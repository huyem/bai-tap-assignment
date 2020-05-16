#include<stdio.h>

int main(){
	int n,s=0;
	printf ("nhap so n\n");
	scanf("%d",&n);
	if(n<10){
		printf("tong cac chu so : %d",n);
	}else{
		if(n>=10){
			for(int i=0,n1;n1!=0;i++){
			int n2=n/10;
			n1=n2%10;
			s=s+n1;
			} 
			
			printf ("tong cac chu so chua n la %d",s);		}
	}
}
