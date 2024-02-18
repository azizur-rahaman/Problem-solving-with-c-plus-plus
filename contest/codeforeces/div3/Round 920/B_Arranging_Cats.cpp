#include<stdio.h>

void print_divisors(int x){
    
    for (int i = 0; i <= x; i++)
    {
        printf("%d\n", i);
    }
    
}

int main(){
    int num;
    scanf("%d", &num);

    print_divisors(num);

    return 0;
}