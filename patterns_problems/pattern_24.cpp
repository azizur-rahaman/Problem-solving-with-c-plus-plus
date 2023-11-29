
/*

*******
*     *
* *** *
* * * *
* *** *
*     *
*******

*/


#include<iostream>
using namespace std;

int main(){
    
    // int rows;

    // // printf("Enter number of rows:");
    // // scanf("%d", &rows);
    // // int k= rows-1;

    for (int i = 1; i <= 7; i++)
    {   
        
        for (int j =1; j <= 7; j++)
        {
            if(i==1 || i==7 || j==1 || j==7){ 
                printf("*");
            } else if( (i>=3 && i<=5) && (j>=3 && j<=5) ){

                if(i ==4 && j ==4) printf(" ");
                else printf("*");

            } else printf(" ");
        }

        printf("\n");
        
    }
    
}