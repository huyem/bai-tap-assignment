#include<stdio.h>

int main(){
	int n,uoc=0;
	printf("nhap so bat ki \n ");
	scanf("%d",&n);
	if(n<2){
		printf("day kog phai so nguyen to");
		
		}
		for(int i=1;i<=n;i++){
			if ( n % i == 0 ){
			uoc++;
		
		}
	}
		if(uoc > 2){
			printf("day kog phai la nguyen to");
		} else{
			printf("day la so nguyen to");
		}
	
}


