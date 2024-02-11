#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);


    for (int i = 0; i < t; i++)
    {
        int a1,a2,a3;
        scanf("%d %d %d", &a1, &a2, &a3);

        if( a1+a2 == a3 ) printf("YES\n");
        else if( a1+a3 == a2) printf("YES\n");
        else if( a2+a3 == a1) printf("YES\n");
        else printf("NO\n");
    }

}