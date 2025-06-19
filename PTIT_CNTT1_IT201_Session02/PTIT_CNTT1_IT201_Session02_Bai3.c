#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i, temp;
    printf("nhap so phan tu 0-100: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("so luong phan tu ko hop le");
        return 0;
    }
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("nhap phan tu ko hop le");
        return 0;
    }
    printf("nhap %d phan tu: ", n);
    for (int i = 0; i< n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n/2; i++ ) {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    printf("mang sau dao nguoc: ");
    for (int i = 0; i< n; i++) {
        printf("%d ", arr[i]);
        if (i != n-1) {
            printf(" ");
        }
    }
    return 0;
}

