# include <stdio.h>
# include <math.h>
int main(){
	float a,b,c,d,x1,x2;
	printf("nhap a:\n",a);
	scanf("%f",&a);
	printf("nhap b:\n",b);
	scanf("%f",&b);
	printf("nhap c:\n",c);
	scanf("%f",&c);
	d==b*b-4*a*c;
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
			printf("nghiem la %f:\n",x1);
			x1==-c/b;// ct chay bi loi o phan nay, e chuA tim dk cach khac phuc
		}
		}
	else{
		if(d<0){
			printf("phuong trinh vo nghiem");
		}else{
			if(d==0){
			printf("phuong trinh co nghiem %f",x1,x2);
			scanf("%f",&x1,&x2);
			x1==x2==-b/(2*a);
			}
			else{
			printf("nghiem x1 la %f:\n",x1);
			scanf("%f",&x1);
			x1==((-b )+ sqrt(d))/(2*a);
			printf("nghiem x2 la %f:\n",x2);
			scanf("%f",&x2);
			x2==((-b) +sqrt(d))/(2*a);
			}
		}
		
	}
	
}
