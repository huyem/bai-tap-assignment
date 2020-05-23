#include<stdio.h>

int main(){
	int n;
	printf("nhap so mang :\n");
	scanf("%d",&n);
	int ary[n];
	
	for(int i=0;i<n;i++){
		printf("nhap gia tri cho pt %d:\n",i);
		scanf("&d",&ary[i]);
		for(int j=0;j<i;j++){
			if(ary[i]==ary[j]){
			i--;
			break;
		}
		}
	}
	printf("mag vua nhap:\n");
	for(int i=0;i<n;i++){
		printf("%d\n",ary[i]);
	}
}
