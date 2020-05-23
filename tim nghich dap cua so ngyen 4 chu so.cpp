#include <stdio.h>;

int main (){
	int num;
	printf ("nhap so nguyen co 4 chu so bat ki",num);
	scanf ("%d",&num);
	if( num>0 && num <=9999){
		int n1=num; // y tuong lay n1 chia 10 lay du se la so nghich dao
		int n2=0;
		n2=n2*10+n1%10;
		n1=n1/10;
		if (n1>0){
			n2=n2*10+n1%10;
			n1=n1/10;
			if(n1>0){
					n2=n2*10+n1%10;
					n1=n1/10;
					if(n1>0){
						n2=n2*10+n1%10;
						n1=n1/10;
						printf ("nghich dao cua la %d ", n2);
					}
					
				}
		} else{
			printf ("nghich dao cua la %d ", n2);

		}
		
	}else {
		printf ( " gia tri kog dung");
	}
}
