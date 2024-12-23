#include <stdio.h>

int main() {
    int n, i, x;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap phan tu can tim kiem: ");
    scanf("%d", &x);
    int found = 0;  
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Phap tu %d nam trong mang arr[%d].\n", x, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Phan tu %d khong nam trong mang.\n", x);
    }

    return 0;
}
