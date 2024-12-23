#include <stdio.h>

void sortRow(int arr[], int m) { // sắp xếp theo chiều tăng dần theo thuật toán Bubble Sort 
    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n, m;
    printf("Nhap so dong n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);

    int arr[n][m];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap phan tu arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        sortRow(arr[i], m);
    }
    printf("\nMang sau khi sap xep theo tung dong:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

