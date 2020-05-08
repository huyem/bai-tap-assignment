// nhap vao hai so nguyen, tinh tong va hieu hai so do
#include <stdio.h>
int main(){
	int x;
	int y;
	printf("Nhap 2 so nguyen:\n");
	// day la 1 comment - dong nay ko thuc thi
	scanf("%d",&x);
	scanf("%d",&y);
	int z;
	z = x+y;
	printf("tong cua %d + %d = %d\n",x,y,z);
	int a;
	a = x-y;
	printf("hieu cua %d - %d = %d\n",x,y,a);
}
