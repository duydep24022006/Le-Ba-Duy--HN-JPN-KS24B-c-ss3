#include <stdio.h>

int main(){
	float a, h, s;
	printf("moi ban nhap canh cua tam giac\n");
	scanf("%f",&a);
	printf("moi ban nhap chieu cao cua tam giac\n");
	scanf("%f",&h);
	s = 0.5 * a * h;
	printf("dien tich cua tam giac la %f",s);
	return 0;
	
}
