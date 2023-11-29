
/*

    1
   12
  123
 1234
12345
 1234
  123
   12
    1

*/


#include<iostream>
using namespace std;

int main(){
    
    int k=1, rows;

    printf("Enter number of rows:");
    scanf("%d", &rows);
    int i_rows = (rows/2) + 1;

    for (int i = 1; i <= rows; i++)
    {   
        int k= 1;
        for (int j = 1; j <= i_rows; j++)
        {
            if(i<= i_rows){
                if(j>= i_rows+1-i && j<= (i_rows-1)+i) {printf("%d", k); k++;}
                else printf(" ");
                
            }else{
                if(j>= (i- (i_rows-1))){ printf("%d", k); k++;
                }else printf(" ");
            }
        }
        
        printf("\n");
        
    }
    
}