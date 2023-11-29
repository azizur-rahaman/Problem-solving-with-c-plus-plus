

/*

*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********


*/



#include<iostream>
using namespace std;

int main(){
    
     for (int i = 1; i <= 9; i++)
    {   
        for (int j = 1; j <= 9; j++)
        {
            if(i<=5){
                if(j>6-i && j<4+i) printf(" ");
                else printf("*");
            }else{
                if(j >= i-3 && j <= 13-i) printf(" ");
                else printf("*");
            }
        }
       
        printf("\n");
        
    }
    
}