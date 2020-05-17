#include <stdio.h>

int main (){
	int n;
	printf("nhap so mang :\n");
	scanf("%d",&n);
	int ary[n], sole = 0 , t=0 ;
	
	for(int i=0;i<n;i++){
		printf("nhap so: %d \n",i);
		scanf("%d",&ary[i]);
	}
	int min=ary[0],i;
	for(i=0;i<n;i++){
		if(ary[i]<min){
			min=ary[i];
		}
		}
	if(min>=0){
		printf("so nguyen duong nhon  nhat:%d",min);
	}else {
	 printf("mamg kog co gt nguyen duong");
	}
}

	
