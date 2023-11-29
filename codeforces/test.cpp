#include <stdio.h>

int main() {
    
    // int n,sum=0;
    // scanf("%d", &n);
    
    // while (n--)
    // {   
    //     int temp;
    //     scanf("%d", &temp);
    //     sum+=temp;
    // }

    // printf("sum: %d", sum);
    

//! 2
    int n,sum=0;
    scanf("%d", &n);
    
    int i=0;
    while (i<n)
    {   
        int temp;
        scanf("%d", &temp);
        sum+=temp;
        i++;
    }

    printf("sum: %d", sum);


    return 0;
}

