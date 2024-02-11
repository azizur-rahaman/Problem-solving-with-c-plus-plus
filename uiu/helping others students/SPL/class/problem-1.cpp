#include<stdio.h>

int add(int a, int b){
    return a + b;
}

int minus(){
    return a-b;
}

int main(){
    int a,b;
    char c;
    scanf("%d %d", &a, &b);

    int reutrn_value = 0;

    if(c == '+') reutrn_value = add(a,b);
    else if( c == '-') reutrn_value = minus(a,b);


    printf("%d", reutrn_value);
    

    
    
}