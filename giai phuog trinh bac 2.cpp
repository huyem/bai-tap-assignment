# include <stdio.h>
# include <math.h>
int main(){
	int a,b,c,d;
	printf("nhap a:\n",a);
	scanf("%d",&a);
	printf("nhap b:\n",b);
	scanf("%d",&b);
	printf("nhap c:\n",c);
	scanf("%d",&c);
	if(a==0){
		if(b==0){
		    if(c==0){
		     	printf("phuong trinh co vo so nghiem");
			}
			else{
				printf("phuong trinh vo nghiem");
			}
		}
		else{
			float x = -(float)c/b;
						printf ("nghiem la %f:\n", x);
// ct chay bi loi o phan nay, e chuA tim dk cach khac phuc
		}
		}
	else{
		int d= b*b-4*a*c;
		if(d<0){
			printf("phuong trinh vo nghiem");
		}else{
			if(d==0){
			int x=(float)-b/(2*a);
			printf("phuong trinh co nghiem %f",x);
			}
			else{
			float x1=((-b )+ sqrt(d))/(float)(2*a);
			printf("nghiem x1 la %f:\n",x1);
			float x2=((-b) +sqrt(d))/(float)(2*a);
			printf("nghiem x2 la %f:\n",x2);
			}
		}
		
	}
	
}
