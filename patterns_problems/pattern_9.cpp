
/*

ABCDCBA
ABC CBA
AB   BA
A     A

*/


#include<iostream>
using namespace std;

int main(){
    
    for (int i = 1; i <= 4; i++)
    {   
        int k  = 0;

        for (int j = 1; j <= 7; j++)
        {
            if(j > (5-i) && j < (3+i)){

                printf(" ");
                
                if(j==4) k--;
               

            }else{

                printf("%c", (65+k));

                j<4?k++:k--;
            
            }
        }
        printf("\n");
        
    }
    
}