#include<iostream>
using namespace std;

int main(){
    int n;
    int increment=1;
    cin>>n;

    //1st [algorithm written by me]
    for (int i = 1; i <= n; i++)
    {
       for (int j = 1; j <=i; j++)
       {
        cout<<increment;
        increment++;
       }
       cout<<endl;
       
    }

    //2nd [algorithm in the video]
    //same as me
    
    
}