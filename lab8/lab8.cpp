#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,*p;
	printf("nhap so n\n");
	scanf("%d",&n);
	p= (int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		printf("Nhap vao so thu %d:\n",i);
		scanf("%d",(p+i));
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(*(p+j)>*(p+j+1)){
				int temp=*(p+j);
				*(p+j)=*(p+1+j);
				*(p+j+1)=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%5d",*(p+i));
	}	printf("\n");
	
}
