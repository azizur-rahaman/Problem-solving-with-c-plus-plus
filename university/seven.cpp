#include <stdio.h>

int main() {
    
    int i=1;

    while (true)
    {   
        char temp;
        scanf(" %c", &temp);

        if(temp=='A') break;
        printf("Input %d: %c\n", i, temp);
        i++;
    }

    
    return 0;
}
