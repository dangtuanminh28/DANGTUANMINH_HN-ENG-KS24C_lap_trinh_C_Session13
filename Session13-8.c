#include <stdio.h>
// Ham tim uoc chung lon nhat
int timUCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b; // Lay phan du cua a chia b
        a = temp;
    }
    return a;
}
int main() {
    int n1, n2;
    // Khai bao va gan gia tri cho hai so nguyen
    printf("Nhap so thu nhat: ");
    scanf("%d", &n1);
    printf("Nhap so thu hai: ");
    scanf("%d", &n2);
    // Goi ham tim UCLN
    int ucln = timUCLN(n1, n2);
    // In ket qua
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", n1, n2, ucln);
    return 0; // Ket thuc chuong trinh
}

