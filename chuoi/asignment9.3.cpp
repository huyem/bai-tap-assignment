#include<stdio.h>
#include<string.h>

int main(){
	int n;
	printf("nhap so ki tu:\n");
	scanf("%d",&n);
	char str[n];
	printf("nhap chuoi:\n");
	scanf("%s",str);
	int soluong=strlen(str);
	for(int i=0;i<soluong-1;i++){
		for(int j=i+1;j<soluong;j++){
			if(str[i]>str[j]){
				int temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}printf("chuoi dk sap xep theo alphabe:%s",str);
}
