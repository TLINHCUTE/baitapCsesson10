#include <stdio.h>

void linearSearch(int arr[], int n, int target) {
    int found = 0;  
    int positions[n]; 
    int count = 0;  
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            positions[count] = i;  
            count++;  
            found = 1;
        }
    }
    if (found) {
        printf("Phan tu %d tim thay tai cac vi tri sau:\n", target);
        for (int i = 0; i < count; i++) {
            printf("Vị trí %d\n", positions[i]);
        }
    } else {
        printf("Phan tu %d khong co trong mang.\n", target);
    }
}

int main() {
    int n;
    printf("nhap so phan tu trong mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("nhap cac phan tu trong mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phần tử %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Nhap so nguyen can tim: ");
    scanf("%d", &target);

    linearSearch(arr, n, target);

    return 0;
}
