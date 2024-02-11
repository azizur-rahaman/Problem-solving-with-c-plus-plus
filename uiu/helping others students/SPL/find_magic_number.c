#include<stdio.h>
#include<math.h>
#define FLOATING_COMPARISON 0.00001

int main(){
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
       char x1,x2,x3;

       scanf(" %c %c %c", &x1, &x2, &x3);

       int total = x1+x2+x3;

       if( total == ( 'A' + 'B' + '?')) printf("C\n");
       else if( total == ( 'A' + 'C' + '?')) printf("B\n");
       else printf("A\n");
    }
    

    return 0;
}
