#include<stdio.h>

int main(){
	int data[5]={23,90,9,25,16};
	int tmp,i,j;
	for (j=1;j<5;j++){
		i = j-1;
		tmp = data[j];
		while (i>=0 && tmp<data[i]){
			data[i+1]=data[i];
			i--;
		}
		data[i+1]=tmp;
	}
	for(i=0;i<5;i++){
		printf("%d\n",&data[i]);
	}
	
}
