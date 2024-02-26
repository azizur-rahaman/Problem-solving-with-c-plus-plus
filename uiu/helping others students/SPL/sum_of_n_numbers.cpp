#include<stdio.h>

int main(){

    // ANS: (b):
    //* we can use a bool veriable to make it sentinel controll
    //? value of sentinel we use is: False


    //ANS (c):

    int n, cnt=0;
    scanf("%d", &n);

    int counter = 1;

    bool flag = true;

    while (flag)
    {
        cnt += counter;

        if(counter == n) break;
        counter++;
    }
    
   printf("sum: %d", cnt);

}