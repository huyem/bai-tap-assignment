# include <stdio.h>

int main(){
	int n;
	printf ("nhap so nguyen n: \n",n);
	scanf ("%d",&n);
	if ( n>0 && n <= 9999 ){
		if (n < 10 ){
			int n1 = n;
			printf ("nghich dao la %d",n1);
		}else if (n>10 && n<100){
			int n1,n2,n3;
			n1=n%10;
			n3=n/10;
			n2=n1*10+n3;
			printf ("nghich dao cua n la %d ",n2);
			
		}else if (n>99 && n<1000){
			int a,b,c,a2,b2,n2;
				a=n%10;
				a2=n/10;
				b=a2%10;
				b2=a2/10;
				c=b2%10;
	    		n2 = a*10*10+ b*10 + c;
	    		printf("so nghich dao cuan la %d ",n2);
		}else if(n>999 && n<9999){
					int a,b,c,d,a2,b2,c2,n2;
					a=n%10;
					a2=n/10;
					b=a2%10;
					b2=a2/10;
					c=b2%10;
					c2=b2/10;
					d =c2 % 10;
				    n2 = a*10*10*10 + b*10*10 + c*10 + d;
					printf ("so nghich dao cua n la %d :\n",n2);
	}
	
}	else {
		printf("day og phai so nguyen co 4 chu so");
}
}

