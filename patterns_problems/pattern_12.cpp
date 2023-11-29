
/*

*******************
 ***************** 
  ***************  
   *************   
    ***********    
     *********     
      *******      
       *****       
        ***        
         *  

*/


#include<iostream>
using namespace std;

int main(){
    
    int k=1, rows;

    printf("Enter number of rows:");
    scanf("%d", &rows);
    int d_rows = rows * 2;

    for (int i = 1; i <= rows; i++)
    {   
  
        for (int j=1; j<= (d_rows-1) ; j++)
        {
            if(j>=i && j<= d_rows-i) printf("*");
            else printf(" ");
        }



        printf("\n");
        
    }
    
}