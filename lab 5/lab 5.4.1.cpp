#include<stdio.h>

int main(){
	int n,u=0;
	printf("nhap so nbat ki:\n");
	scanf("%d",&n);
	if(n<2){
		printf("dday kog phai so n.to");
	}else {
		for(int i=1;i<=n;i++){
			if (n%i==0){
			u++;
			}
		}
			if(u>2){
				printf("day kog pai so nghuyen to");
			}else {
				printf("day la so nguyen to");
				}
		}
	}

