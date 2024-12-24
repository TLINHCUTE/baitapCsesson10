#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; 
        }

        if (arr[mid] > target) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return -1; 
}

int main() {
    int n;
    printf("Nhap phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phần tử %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printf("\nmang sau khi sap xep theo thu tu tàn dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int target;
    printf("\nnhap so nguyen can tim: ");
    scanf("%d", &target);

    int result = binarySearch(arr, n, target);
    if (result != -1) {
        printf("Phan tu %d tim thay tai vi tri %d trong mang (chi so bat dau tu 0).\n", target, result);
    } else {
        printf("Phan tu %d khong co trong mang.\n", target);
    }

    return 0;
}
