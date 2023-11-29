
/*

Enter number of rows:9

        **********
       **********
      **********
     **********
    **********
   **********
  **********
 **********
**********

*/


#include<iostream>
using namespace std;

int main(){
    
    int rows;

    printf("Enter number of rows:");
    scanf("%d", &rows);
    int k= rows-1;

    for (int i = 1; i <= rows; i++)
    {   
        
        for (int j =0; j < k; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < rows+1; j++)
        {
            printf("*");
        }

        k--;
        
        printf("\n");
        
    }
    
}