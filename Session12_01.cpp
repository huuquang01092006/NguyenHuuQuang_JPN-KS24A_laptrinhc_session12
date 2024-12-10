#include <stdio.h>
int printfsum();
int main() {
    int sum = printfsum();
    printf("Tong cua hai so la: %d\n", sum);
    return 0;
}
int printfsum(){
    int num1, num2, sum;
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    return sum;
}

