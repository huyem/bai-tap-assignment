#include<stdio.h>
#include<string.h>

int main(){
	int n;
	printf("nhap gia tri cua mang");
	scanf("%d",&n);
	char str[n];
	printf("nhap chuoi 1:\n",str[n]);
	scanf("%s",str);
	char s='s';

	printf("Vi tri cua chuoi %c trong chuoi %s la: %d",s,str,strchr(str,s)-str);

}
