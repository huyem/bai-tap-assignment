#include<stdio.h>
#include<string.h>
void Concat(char s1[],char s2[]){
	strcat(s1,s2);
}
int main(){
	char s1[50],s2[50];
	printf("nhap chuoi s1:\n");
	scanf("%s",s1);
	printf("nhap chuoi s2:\n");
	scanf("%s",s2);
	Concat;
	printf("chuoi 1 sau khi noi: %s\n",s1);
}
