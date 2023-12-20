#include<stdio.h>

int main(){


    int n;
    float result = 0.0, j= 1.2;

    scanf("%d", &n);

    for (int i = 1; i <= n ; i++)
    {
    
        result = result + j;
        j= j + 1.1;


    }


    printf("%0.0f", result);

    return 0;
}