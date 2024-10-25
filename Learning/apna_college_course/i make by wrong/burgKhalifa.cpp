#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 0; k < n-i; k++)
            {
                cout<<" ";
            }
            for (int k = 1; k <= (i*2)-1; k++)
            {
                cout<<"*";
            }
            cout<<endl;
            
            
        }
        
    }
    
}