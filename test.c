#include <stdio.h>


int main() {
    
    int n, counter = -20;
    scanf("%d", &n);

    while(n--){

       printf("%d, ", counter);
       counter+=6;

    }
    

    return 0;
}
