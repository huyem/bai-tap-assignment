# include <stdio.h>

int main(){
	float a;
	float r;
	printf ("nhap so tien a :\n",a);
	scanf ("%f",&a);
	printf ("lai xuat mot nam r :\n",r);
	scanf ("%f",&r);
	if( a > 0 ){
		float a1,a2,a3,a4;
		a1 = a + a*r;
		a2 = a1 + a1*r;
		a3 = a2 + a2*r;
		a4 = a3 + a3*r;
		printf ("tong so tien sau 4 nam %f",a4);
			}else{
				printf ("quit");
			}
}
