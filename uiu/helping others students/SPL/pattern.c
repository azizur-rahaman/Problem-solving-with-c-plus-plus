#include <iostream>


int main(){
    int n;
    scanf("%d", &n);
    
    int startCounter = 1;
    int spaceCounter = n / 2;

    for (int i = 1; i <= n; i++)
    {   
        

        for (int j = 1; j <= spaceCounter; j++)
        {
            printf(" ");
        }
        
        if(i > (n/2)){
            spaceCounter += 1;
        }else {
            spaceCounter -= 1;
        }

        for(int j = 1; j <= startCounter; j++){
            printf("*");
        }

        if(i > (n/2)){
            startCounter -= 2;
        }else {
            startCounter += 2;
        }

        printf("\n");
    }
    

}