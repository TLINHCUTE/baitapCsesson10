#include <stdio.h>

// Hàm sắp xếp mảng một chiều theo thứ tự giảm dần (sử dụng thuật toán sắp xếp nổi bọt)
void sortSecondaryDiagonal(int arr[][100], int n) {
    // Sắp xếp các phần tử trên đường chéo phụ
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i][n - i - 1] < arr[j][n - j - 1]) {
                int temp = arr[i][n - i - 1];
                arr[i][n - i - 1] = arr[j][n - j - 1];
                arr[j][n - j - 1] = temp;
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

    // Kiểm tra nếu mảng không phải là ma trận vuông (không thể có đường chéo phụ)
    if (row != col) {
        printf("Ma tran khong phai ma tran vuong, khong the sap xep duong cheo phu.\n");
        return 1;
    }
    int arr[row][col];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Nhap phan tu arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    sortSecondaryDiagonal(arr, row);
    printf("\nMang sau khi sap xep duong cheo phu theo thu tu giam dan la:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
