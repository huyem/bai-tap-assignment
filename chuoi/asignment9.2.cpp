#include<stdio.h>
#include<string.h>

int main(){
	char s1[20],s2[20];
	printf("nhap chuoi 1:\n");
	scanf("%s",s1);
	printf("nhap chuoi 2:\n");
	scanf("%s",s2);
	int cmp=strcmp(s1,s2);
	printf("ket qua %d",cmp);
}
