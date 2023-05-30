#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    
    int temp=1;
    
    for (int i = 1; i <= n; i++)
    {
        
       for(int j=0; j<(n-i); j++){
          cout<<" ";
       }
       for(int k=0; k<temp; k++){
           cout<<"*";
       }
       temp+=2;
       cout<<endl;
        
    }
    
    temp= (n*2)-1;
    
    for (int i = 1; i <= n; i++)
    {
        for(int k=1; k<i; k++){
           cout<<" ";
       }
       for(int j=0; j<temp; j++){
          cout<<"*";
       }

       temp-=2;
       cout<<endl;
        
    }
    
}