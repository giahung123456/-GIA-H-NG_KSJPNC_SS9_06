#include <stdio.h>

int main() {
    int arr[100][100], n, m, choice, sum, product, maxSum, rowSum, maxRow;

    do {
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap kich co mang (n x m): ");
                scanf("%d %d", &n, &m);
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("Nhap gia tri phan tu [%d][%d]: ", i + 1, j + 1);
                        scanf("%d", &arr[i][j]);
                    }
                }
                break;

            case 2:
                printf("Gia tri cac phan tu cua mang theo ma tran:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("%d ", arr[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                sum = 0;
                printf("Cac phan tu la le trong mang: ");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        if (arr[i][j] % 2 != 0) {
                            printf("%d ", arr[i][j]);
                            sum += arr[i][j];
                        }
                    }
                }
                printf("\nTong cac phan tu la le: %d\n", sum);
                break;

            case 4:
                product = 1;
                printf("Cac phan tu nam tren duong bien: ");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                            printf("%d ", arr[i][j]);
                            product *= arr[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu nam tren duong bien: %d\n", product);
                break;

            case 5:
                printf("Cac phan tu nam tren duong cheo chinh: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i][i]);
                }
                printf("\n");
                break;

            case 6:
                printf("Cac phan tu nam tren duong cheo phu: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i][n - i - 1]);
                }
                printf("\n");
                break;

            case 7:
                maxSum = -1;
                for (int i = 0; i < n; i++) {
                    rowSum = 0;
                    for (int j = 0; j < m; j++) {
                        rowSum += arr[i][j];
                    }
                    if (rowSum > maxSum) {
                        maxSum = rowSum;
                        maxRow = i;
                    }
                }
                printf("Dong co tong gia tri cac phan tu la lon nhat: ");
                for (int j = 0; j < m; j++) {
                    printf("%d ", arr[maxRow][j]);
                }
                printf("\n");
                break;

            case 8:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le, vui long chon lai.\n");
        }
    } while (choice != 8);

    return 0;
}