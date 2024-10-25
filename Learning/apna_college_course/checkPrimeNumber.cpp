//prime number can be divisible by only that number & 1

#include<iostream>

int main(){
    int n;
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            printf("Not Prime!\n");
            return 0;
        }
        
    }
    printf("Prime\n");
    return 0;
    
}