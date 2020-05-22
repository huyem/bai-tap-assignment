#include <stdio.h>

int main(){
	int ary[4][4],sum1=0,sum2=0;

	for(int i = 0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("ary[%d][%d]=",i,j);
			scanf("%d",&ary[i][j]);
		}
	}

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i==j) 
				sum1+=ary[i][j];
			if(i+j==3)
				sum2+= ary[i][j];
		}
	
	}
	printf("duog cheo 1 co tb cong : %f\n",(float)sum1/4);
	printf("duog cheo 2 co tb cong : %f\n",(float)sum2/4);
}
//int main(){
//	int ary[4][4];
	
//	for(int i;i<4;i++){
//		for(int j;j<4;j++){
//			printf("ary[%d][%d]=",i,j);
//			scanf("%d",&ary[i][j]);
//		}
//	}
	
//	for(int i=0;i<4;i++){
//		for(int j=0;j<4;j++){
//			printf("%5d ",ary[i][j]);
//		}
//	printf("\n"); 
//}/

//}
