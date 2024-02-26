#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int n1, n2;
    scanf("%d %d", &n1, &n2);

    for (int i = 0; i < n; i++) {
        if (i <= n1 || i >= n2) {
            for (int j = i + 1; j < n; j++) {
                if ((i <= n1 && j <= n1 && arr[i] > arr[j]) || (i >= n2 && j >= n2 && arr[i] < arr[j])) {
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
