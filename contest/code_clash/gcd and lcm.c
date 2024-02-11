#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int max = a > b ? a : b;
    while(1)
    {
        if (max % a == 0 && max % b == 0) break;
        max++;
    }
    int multiple = a * b;
    int GDC = (a * b)/max;
    printf("GDC: %d\n", GDC);
    printf("LCM: %d",max);
    return 0;
}