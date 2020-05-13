#include <stdio.h>;

int main (){
	int n;
	printf ("nhap so nguyen co 4 chu so bat ki",n);
	scanf ("%d",&n);
	int n2=0;
	for (;n!=0;n/=10){
	n2 = n2*10+n%10;
} 
printf ("nghich dao la %d",n2);

}

