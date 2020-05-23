#include <stdio.h>

int main (){
	int n;
	printf("nhap so mang :\n");
	scanf("%d",&n);
	int ary[n];
	
	for(int i=0;i<n;i++){
		printf("nhap so: %d \n",i);
		scanf("%d",&ary[i]);
	}
	int max=ary[0];
	for(int i=0;i<n;i++){
		if(ary[i]>max){
			max=ary[i];
		}
	}if(max<=0){
	
		printf("mag kog co so duong");
	}else {
	for(int i=0;i<n;i++){
		if(ary[i]<max && ary[i]>=0){
			max=ary[i];
		}
	
	}
		printf("so duong nho nhat: %d\n",max);

}
}

	
