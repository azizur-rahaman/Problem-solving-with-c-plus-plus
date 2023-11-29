

// \********/
// *\******/*
// **\****/**
// ***\**/***
// ****\*****
// ****/\****
// ***/**\***
// **/****\**
// */******\*
// /********\



#include<iostream>
using namespace std;

int main(){
    
    int rows;

    printf("Enter number of rows:");
    scanf("%d", &rows);

    int lp=1,rp=rows;

    for (int i = 1; i <= rows; i++)
    {   
        for (int j = 1; j <= rows; j++)
        {
            if(j==lp || j==rp) {
                
                if(j==lp) printf("\\");
                else {
                    if(j!= (rows/2)+1){
                        printf("/");
                    }else{
                        printf("*");
                    }
                }

            } else printf("*");
        }
        lp++;rp--;

        printf("\n");
        
    }
    
}