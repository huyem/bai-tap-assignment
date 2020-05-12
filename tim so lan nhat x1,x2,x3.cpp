#include<stdio.h>

int main (){
	int x1,x2,x3;
	printf("nhap ba so bat ki:\n");
	printf("so thu nhat:\n");
	scanf("%d",&x1);
	printf("so thu 2:\n");
	scanf("%d",&x2);
	printf("so thu 3:\n");
	scanf("%d",&x3);
	if(x1>x2){
		if(x2>x3){
			printf("so lon nhat %d",x1);
		}else{
			if(x1>x3){
			printf("so lon nhat %d",x1);
			}else{
				printf("so lon nhat %d",x3);
			}
		}
		
		
	}else{
		if(x2>x3) {
			if(x2>x3){
				printf("so lon nhat %d",x2);
			}else{
				printf("so lon nhat %d",x3);
			}
			}else{
				if(x2>x3){
				printf("so lon nhat la  %d",x2);
				}else{
				printf("so lon nhat la %d",x3);
				}
			}
		}
		}
