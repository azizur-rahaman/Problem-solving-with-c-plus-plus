#include<stdio.h>

int main(){
    int t;
    double average = 0;

    scanf("%d", &t);
    int length = t;

    
    while (t--)
    {
        double temp;
        scanf("%lf", &temp);

        average+=temp;

    }

    printf("%0.6lf", average / length);
    
}




