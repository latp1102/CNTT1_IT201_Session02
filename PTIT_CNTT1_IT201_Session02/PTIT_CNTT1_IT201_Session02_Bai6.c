#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i, pos, value;
    printf("nhap so luong phan tu 0-100: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("so luong phan tu hop le");
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
    printf("nhap vi tri muon them: ");
    scanf("%d", &pos);
    if (pos < 0 || pos > n) {
        printf("vi tri khong hop le");
        return 0;
    }
    printf("nhap gia tri muon them: ");
    scanf("%d", &value);
    for (i = 0; i > pos; i++) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;
    printf("mang sau khi them: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}