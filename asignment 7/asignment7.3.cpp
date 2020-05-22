#include<stdio.h>
int main(){
	int ary[4][3], arr[3][4];

	for(int i = 0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("ary[%d][%d]=",i,j);
			scanf("%d",&ary[i][j]);
		}
	}
	
	for(int i = 0;i<4;i++){
		for(int j=0;j<3;j++){
		arr[j][i]= ary[i][j];
		}
	}
	
	printf("\n");
}


