#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //1 st way [ algorith written by me]

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }

    //2nd way [algorithm show in the video]

    for (n; n >0; n--)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    
}