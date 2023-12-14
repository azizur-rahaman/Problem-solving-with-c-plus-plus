#include <stdio.h>
#include<stdbool.h>


int main() {

    int non_zero_number;
    bool flag = false;

    scanf("%d", &non_zero_number);
   
   if(non_zero_number == 1) flag=true;
   else {
        while ( non_zero_number != 1)
        {
            if(non_zero_number == 2) {

            flag = true; 
            break;
            }
            non_zero_number/=2;
        }
   
   }
   

   printf("%s\n", flag? "YES":"NO");
   

    return 0;
}
