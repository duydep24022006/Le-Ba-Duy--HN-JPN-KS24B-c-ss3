#include <stdio.h>

int main(){
	float r, c, s, pi = 3.14;
	printf("moi ban nhap ban kinh de tim dien tich va chu vi \n");
	scanf("%f",&r);
	c = 2 * pi * r;
	s = pi * r * r;
	printf("chu vi hinh tron la %.2f va dien tich hinh tron la %.2f", c, s);
	
	return 0;
	
}
