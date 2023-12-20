#include<stdio.h>
#include<stdbool.h>

int main(){
    int n;
    bool isOne = true;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if(isOne==true) {
            printf("1");
            isOne=false;
        }else{
            printf("0");
            isOne=true;
        }

        if(i!=n) printf(",");
    }
    
}