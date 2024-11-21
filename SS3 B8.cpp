#include <stdio.h>

int main() {
    int number;
    int sum;

    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &number);

    if (number < 1000 || number > 9999) {
        printf("Vui long nhap mot so nguyen co 4 chu so! an ba to com\n");
    } else {
        int number1 = number / 1000;         
        int number2 = (number / 100) % 10;   
        int number3 = (number / 10) % 10;    
        int number4 = number % 10;           

        printf("nghich dao cua cac chu so cua so da nhap la: %d%d%d%d",number4,number3,number2,number1);
    }

    return 0;
}
