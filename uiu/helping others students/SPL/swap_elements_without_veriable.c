#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("a: %d\nb: %d\n", a,b);
    printf("\n\n");
    a = a + b;
    printf("a: %d\nb: %d\n\n", a, b);

    b = a - b;
    printf("a: %d\nb: %d\n\n", a, b);
    a = a - b;
    printf("a: %d\nb: %d\n\n", a, b);
}