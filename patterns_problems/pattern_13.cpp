
/*

   1   
  232  
 34543 
4567654

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
        int k=i;
        for (int j=1; j<= (d_rows-1) ; j++)
        {
            if(j>= (rows+1) -i && j<= (rows-1)+i) {
                printf("%d", k);
                j<= (rows-1)? k++: k--;
            }
            else printf(" ");

        }



        printf("\n");
        
    }
    
}