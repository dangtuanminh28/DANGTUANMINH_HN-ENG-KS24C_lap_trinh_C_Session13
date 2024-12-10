#include <stdio.h>
// Ham tao ma tran 2 chieu
void taoMaTran(int cols, int rows, int arr[cols][rows]) {
    printf("Nhap cac gia tri cho ma tran (%d hang x %d cot):\n", cols, rows);
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("Nhap phan tu tai hang %d, cot %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
}
// Ham in ma tran 2 chieu
void inMaTran(int cols, int rows, int arr[cols][rows]) {
    printf("\nMa tran:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int cols, rows;
    // Nhap so hang va so cot
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &cols);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &rows);
    // Khai bao ma tran 2 chieu
    int arr[cols][rows];
    // Goi ham tao ma tran
    taoMaTran(cols, rows, arr);
    // Goi ham in ma tran
    inMaTran(cols, rows, arr);
    return 0;
}

