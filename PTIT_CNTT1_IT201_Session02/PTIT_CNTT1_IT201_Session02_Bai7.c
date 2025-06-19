#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n , target;
    int found = 0;
    printf("nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("so luong phan tu ko hop le");
        return 1;
    }
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("so luong phan tu ko hop le");
        return 0;
    }
    printf("nhap %d phan tu: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("nhap so nguyen can tim tong: ");
    scanf("%d", &target);
    for (int i = 0; i < n - 1 && !found; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("cap phan tu co tong bang %d: %d, %d ", target, arr[i], arr[j]);
                found = 1;
                break;
            }
        }
    }
    if (!found) {
        printf("khong tim thay");
    }
    free(arr);
    return 0;
}
