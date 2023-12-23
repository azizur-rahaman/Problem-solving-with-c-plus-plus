#include <stdio.h>
#include<math.h>

int main() {
    
    int a, result = 0, p=0;
    scanf("%d", &a);

    int temp = a; // 503

    while ( temp != 0)
    {
        temp = temp / 10;
        p++;
    }

    temp = a; // 503

    while (temp != 0)
    {   
        int remainder = temp % 10;

        result += pow(remainder,p);
        temp= temp / 10;
    }
    
    if(result == a){
        printf("Armstrong\n");
    }else{
        printf("Not Armstrong\n");
    }

    return 0;
}
