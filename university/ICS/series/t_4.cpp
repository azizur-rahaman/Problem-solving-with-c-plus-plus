#include<stdio.h>
#include<math.h>

int main(){


    int n, result = 0, j=3;

    scanf("%d", &n);

    for (int i = 1; i <= n ; i++)
    {
    
        result = result + j;
        j= j + 3;

    }


    printf("%d", result);

    return 0;
}