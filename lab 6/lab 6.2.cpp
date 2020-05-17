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

	for(int i=0;i<n;i++){
		if(ary[i]%2!=0 && i%2==0){
			t+=ary[i];
			sole++;
		}
		
	} printf("trung binh cong la: %f",(float) t /sole);
}
