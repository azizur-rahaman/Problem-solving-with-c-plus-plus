#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    // 1st [ written by me]
    for (int i =1; i <= n; i++)
    {
        for(int  k=1; k<=(n-i); k++){
            cout<<" ";
        }
        for (int j = 0; j < i; j++)
        {
           cout<<"*";
        }
        cout<<endl;
        
    }

    //written in the video
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            if(j<=(n-i)){
                cout<<" ";
            }else {
                cout<<"*";
            }
        }
        cout<<endl;
        
    }
    
    
}