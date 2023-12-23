#include <stdio.h>


int main() {
    
    int a,b, small;
    scanf("%d%d", &a, &b);

    if(a<b) {
        small = a;
    }else {
        small = b;
    }


    int gcd = 0;
    int i = 1; 

    while (i <= small)
    {
        if(a % i == 0 && b % i == 0){
            gcd = i;
        }

        i++;
    }
    
    int lcm = (a*b) / gcd;

    printf("g: %d \nL: %d", gcd, lcm);

    return 0;
}
