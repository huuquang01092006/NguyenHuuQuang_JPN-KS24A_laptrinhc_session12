#include <stdio.h>
int findmax(int array[], int length);
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) {
    	printf("Nhap gia tri thu %d: ", i +1);
        scanf("%d", &array[i]);
    }
    int max = findmax(array, n);
    printf("So lon nhat trong mang la: %d\n", max);
    return 0;
}
int findmax(int array[], int length) {
    int max = array[0];
    for (int i = 1; i < length; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}
