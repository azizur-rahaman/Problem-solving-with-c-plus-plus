#include<iostream>
using namespace std;

int main(){
    int k=1,l;
    for (int i = 1; i <= 5; i++)
    {   
        int temp = l;
        for (int j = 0; j < k; j++)
        {
            if(j%2==0) {
                printf("%d", l); 
                i%2==0? l--: l++;
            }
            else printf("*");
        }
        k+=2;
        

        if(i%2!=0) l=i+temp+1;
        else l=k-1;

        printf("\n");
        
    }
    
}