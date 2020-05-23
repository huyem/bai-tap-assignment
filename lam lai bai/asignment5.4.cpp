#include<stdio.h>

int main(){
	int a,b,Ua,Ub,u;
	printf ("nhap so a:\n");
	scanf("%d",&a);
	printf("nhap so b:\n");
	scanf ("%d",&b);
	for(int i;i<=a;i++){
		 Ua=a/i;
	}
	for(int i;i<=b;i++){
		 Ua=b/i;
	}
	for(int i;;i--){
		u=Ua-Ub;
		if(u==0){
				printf("ucln cua %d vs %d la %d",a,b,Ua);
		}else{
		
		printf("%d va %d kog co uoc trung",a,b);
	}
	}

}
