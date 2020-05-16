#include<stdio.h>

int main (){
	int s=0;
	for(int n=1;;n++){
		int n1=s%2;
		if(n1!=0){
			s+=n;
		}printf ("ket qua la %d",s);
	}
}
