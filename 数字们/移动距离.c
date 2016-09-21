#include <stdio.h>
#define N 100
 
int main() {
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);
    int arr[N/n][n];
    for (int a = 0; a < N / n; a++) {

        for (int b = 0; b < n; b++) {

            if (a % 2 == 0)
                arr[a][b] = a * n + b + 1;
            else
                arr[a][b] = (a + 1) * n - b;
        }
    }
    int x1, y1, x2, y2;
    for (int i = 0; i < N / n; i++) {
        for (int j = 0; j < n; j++) {
            if (a == arr[i][j]) {
                x1 = i;
                y1 = j;
            }
            if (b == arr[i][j]) {
                x2 = i;
                y2 = j;
            }
        }
    }
    printf("%d",abs(x2-x1)+abs(y2-y1));
    return 0;
}
