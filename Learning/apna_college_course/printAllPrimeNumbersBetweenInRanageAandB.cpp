#include<iostream>
using namespace std;

int main(){
    int a,b;
    scanf("%d %d", &a, &b);

    for (a; a <= b; a++)
    {
        int i=2;
        
        if(a==1){
            a=3;
        }
        for (i; i<a; i++)
        {
            if(a%i==0){
                break;
            }
        }
        if(i==a){
            cout<<a<<endl;
        }
   
        
    }
    
}