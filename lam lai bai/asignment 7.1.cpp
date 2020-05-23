#include<stdio.h>

int main(){
	int ary[4][4];
	for(int i=0;i<4;i++){
		for(int j =0;j<4;j++){
		printf("nhap gia tri thu [%d][%d]:\n",i,j);
		scanf("%d",&ary[i][j]);
	} 
}		
	int sum1=0,sum2=0;
	for(int i=0;i<4;i++){
		for(int j =0;j<4;j++){
			if(i==j)
			sum1 = sum1+ ary[i][j];
			if(i+j==3)
			sum2+=ary[i][j];
		}
		}
		printf("tbc duong cheo 1 la %f\n",(float)sum1/4);
		printf("tbc duong cheo 1 la %f\n",(float)sum2/4);
}

