#include <stdio.h>

void sortColumn(int arr[][100], int n, int m, int col) { // sắp xếp tăng dần theo thuật toán Bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i][col] > arr[j][col]) {
                int temp = arr[i][col];
                arr[i][col] = arr[j][col];
                arr[j][col] = temp;
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
    for (int j = 0; j < m; j++) {
        sortColumn(arr, n, m, j);
    }
    printf("\nMang sau khi sap xep theo tung cot:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
