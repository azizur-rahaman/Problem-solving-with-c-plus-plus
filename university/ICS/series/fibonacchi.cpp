#include<stdio.h>
#include<stdbool.h>

int main(){
    int n, x=1, y=1;

    scanf("%d", &n);





    for (int i = 1; i <= n; i++)
    {

        if(i==1) printf("1");
        else if(i==2) printf("1");
        else {

            printf("%d", x+y);

            int temp = x;
            x = y;
            y = temp+y;
        }

        if(i != n) printf(", ");
    }
    
    
}