#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //1st [algorithm written by me]
    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j < (n-i); j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < n; k++)
        {
            cout<<"*";
        }
        cout<<endl; 
    }

    //2nd [algorithm written in the video]
    // same as me
    
}