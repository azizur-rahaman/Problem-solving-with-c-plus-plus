#include<stdio.h>
#include<math.h>

int main(){


    int n, result = 0, j=1;

    scanf("%d", &n);

    for (int i = 1; i <= n ; i++)
    {
    
        result = result + j;
        j= j + 2;

    }


    printf("%d", result);

    return 0;
}