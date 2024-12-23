#include <stdio.h>

// Hàm sắp xếp mảng một chiều theo thứ tự tăng dần (sử dụng thuật toán sắp xếp nổi bọt)
void sortDiagonal(int arr[][100], int n) {
    // Sắp xếp các phần tử trên đường chéo chính
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i][i] > arr[j][j]) {
                int temp = arr[i][i];
                arr[i][i] = arr[j][j];
                arr[j][j] = temp;
            }
        }
    }
}

int main() {
    int row, col;
    printf("Nhap so dong row: ");
    scanf("%d", &row);
    printf("Nhap so cot col: ");
    scanf("%d", &col);

    int arr[row][col];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Nhap phan tu arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    if (row != col) {
        printf("Ma tran khong phai la ma tran vuong, khong the sap xep duong cheo chinh.\n");
        return 1;
    }
    sortDiagonal(arr, row);
    printf("\nMang sau khi sap xep duong cheo chinh:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
