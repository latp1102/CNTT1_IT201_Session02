#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i , pos;
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
    printf("nhap vi tri muon xoa: ");
    scanf("%d", &pos);
    if (pos < 0 || pos >= n) {
        printf("khong hop le");
        return 0;
    }
    for (int i = pos; i< n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("mang sau khi xoa: ");
    for (int i = 0; i< n; i++) {
        printf("%d",arr[i]);
        printf(" ");
    }
    free(arr);
    return 0;
}
