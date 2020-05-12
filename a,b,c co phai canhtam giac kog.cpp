#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,t1,t2,t3;
	float p,p2,s;
	printf ("nhap a :\n");
	scanf("%d",&a);
	printf("nhap b:\n");
	scanf("%d",&b);
	printf("nhap c:\n");
	scanf("%d",&c);
	scanf("%d",&t1);
	t1== a+b;
	scanf("%d",&t2);
	t2== a+c;
	scanf("%d",&t3);
	t3==b+c;
	if(t1>c){
		if(t2>b){
			if(t3>c){
				printf("day la ba canh cua tam giac");
				scanf("%f",&p);
				p==a+b+c;
				printf("chu vi tam gia la %d+%d+%d=%d",p);
				scanf("%f",&p2);
				p2==p/2;
				scanf("%f",&s);
				s==sqrt(p2*(p2-a)*(p2-c));
				printf("dien tich tam gia sqrt(%f*(%f-%d)*(%f-%d))=%f",s);
			}else{
				printf("kog phai tam giac");
			}
			
		}else{
			printf("kog phai tam giac");
		}
	}else{
		printf ("kog phai tam giac");
	}
}
