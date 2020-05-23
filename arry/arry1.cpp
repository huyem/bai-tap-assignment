#include<stdio.h>

int main(){
	int ary[10];
	for(int i=0;i<10;i++){
		printf("nhap so nguyen %d :\n",i);
		scanf("%d",&ary[i]);
	}
	int s=0;
	for (int i=0;i<10;i++){
	s+= ary[i];
	
		
	}printf ("tong la:%d",s);
	
}
