#include <stdio.h>
void printfarray(int array[], int length);
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) {
    	printf("Nhap gia tri cua phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Cac phan tu trong mang la: ");
    printfarray(array, n);
    return 0;
}
void printfarray(int array[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
