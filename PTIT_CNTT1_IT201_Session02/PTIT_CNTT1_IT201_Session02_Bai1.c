#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i, max;
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
    for (int i = 0; i< n ; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];;
    for (int i = 1; i < n ; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("%d", max);
    free(arr);
    return 0;
}
