#include<stdio.h>
#include<math.h>

int main(){


    int n, result = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n ; i++)
    {
    
        result = result + i;

    }


    printf("%d", result);

    return 0;
}