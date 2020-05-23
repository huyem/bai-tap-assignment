#include<stdio.h>

int main(){
	int n;
	printf("nhap gia tri cua mang:\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("nhap gt thu %d:",i);
		scanf("%d",&ary[n]);
	}

	for(int i=0;i<n;i++){
		if(ary[i]<0){
			ary[i]=ary[i+1];
			if(ary[i+1]<0){
				for(int j=0;j<n;j++){
					ary[j]=ary[i+1];
				}
			}
			}
				printf("cac so duong lien tiep:%d",ary[i]);
		}	
	}

		
	

