#include<stdio.h>

int main(){
	int n;
	printf("nhap so mang :\n");
	scanf("%d",&n);
	int ary[n];
	
	for(int i=0;i<n;i++){
		int trungso=0;
		do{
		printf("nhap vao pt thu %d:",i);
		scanf("%d",ary[i]);
		for(int j=0;j<i;j++)
		    if(ary[i]==ary[j]){
		    	trungso=1;
		    	break;
			}
		}while(trungso==1);
		}
}
