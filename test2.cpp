#include <stdio.h>

void printPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            if (j == i || j == n - i - 1) {
                printf("x");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;

    scanf("%d", &n);

    if (n % 2 == 0) {
        return 1;
    }

    printPattern(n);

    return 0;
}
