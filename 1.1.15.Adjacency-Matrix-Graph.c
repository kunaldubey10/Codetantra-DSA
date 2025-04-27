#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n >= 1 && n <= 10) {
        int arr[n][n];

        // Input matrix
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                scanf("%d", &arr[i][j]);

        // Output matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", arr[i][j]);  // Always print a space after the number
            }
            if (i != n - 1) {
                printf("\n");  // Newline after each row except the last
            }
        }
    } else {
        printf("-1");
    }

    return 0;
}
