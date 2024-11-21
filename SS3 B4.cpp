#include <stdio.h>

int main(){
	 float toan, anh, van, s, tb;
	 printf("moi ban nhap diem mon toan ");
	 scanf("%f",&toan);
	 printf("moi ban nhap diem mon anh ");
	 scanf("%f",&anh);
	 printf("moi ban nhap diem mon van ");
	 scanf("%f",&van);
	 s = toan + anh + van;
	 tb = s / 3;
	 printf("tong ba mon toan,van,anh la %.2f",s);
	 printf("trung binh ba mon toan,van,anh la %.2f",tb);
	 
	 return 0;
}
