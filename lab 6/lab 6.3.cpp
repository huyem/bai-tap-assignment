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
	int x,i;
	printf ("nhap so x:\n");
	scanf ("%d",&x);
	for( i=0;i<n;i++){
		if(ary[i]==x){
			break ;
		}		
		}
	if(i>=n){
		printf("so x kog nam trong mang");
	}else {
		printf ("day la so trong mang");
	}		
	}
