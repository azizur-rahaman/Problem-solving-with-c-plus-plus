#include<stdio.h>

int main(){

    int n;
    float result = 0.0, base = 2.5, increment = 2.3;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        result = result + base;
        base = base * 2;  // Update the base by multiplying it by 2
        increment = increment + 3;  // Update the increment by adding 3
    }

    printf("Sum of the series: %f", result);

    return 0;
}
