#include <stdio.h>

int main (){
	int n;
	printf("nhap so mang :\n");
	scanf("%d",&n);
	int ary[n] ;
	
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu : %d \n",i);
		scanf("%d",&ary[i]);
	}
	int count=0,s;
	for(int i=0;i<n;i++){
		if(ary[i]%2!=0){
		count++;
		s=ary[i];
		
		}
	}
	if(s!=0)  printf ("so le cuoi cung cus mang:%d",s);
	else  printf ("mang kog co so le nao");
}
