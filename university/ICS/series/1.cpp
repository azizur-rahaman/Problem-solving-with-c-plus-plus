#include<stdio.h>
#include<math.h>


int main(){

    int n, j=2, result=0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        result += pow(i,2) * j;
        j++;
    }
    printf("Resutl: %d", result);
}