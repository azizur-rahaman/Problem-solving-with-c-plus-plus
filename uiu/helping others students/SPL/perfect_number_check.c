#include<stdio.h>

int main(){
    int n, sum = 0;
    scanf("%d", &n);

    int half = n / 2;


    while (half--)
    {
        if( n % (half + 1) == 0) sum+= (half + 1);
    }

    if(n == sum) printf("YES\n");
    else printf("NO\n");
    
}