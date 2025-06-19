#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i, x,count = 0;
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
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("nhap so can dem: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    printf("%d", count);
    free(arr);
    return 0;
}
