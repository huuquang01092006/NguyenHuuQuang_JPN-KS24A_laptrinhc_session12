#include <stdio.h>
long long factorial(int n);
int main() {
    int number;
    printf("Nhap mot so nguyen bat ky: ");
    scanf("%d", &number);
    long long result = factorial(number);
    printf("Giai thua cua %d la: %lld\n", number, result);
    return 0;
}
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
