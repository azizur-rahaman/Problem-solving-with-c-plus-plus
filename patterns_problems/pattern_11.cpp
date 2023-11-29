
/*

*
**
***
****
*****
*****
****
***
**
*

*/


#include<iostream>
using namespace std;

int main(){
    
    int k=1, rows;

    printf("Enter number of rows:");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {   
  
        for (int j=1; j<= k; j++)
        {
            printf("*");
        }

        if(rows%2==0){
            if(i!=(rows/2)) i<(rows/2)?k++:k--;
        }else{
            i<(rows/2)+1?k++:k--;
        }

        printf("\n");
        
    }
    
}