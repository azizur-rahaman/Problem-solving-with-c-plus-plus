#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int intArray[n];
    for (int i = 0; i < n; i++)
    {
        cin>>intArray[i];
    }
    
    for (int i = (n-1); i >=0; i--)
    {
        cout<<intArray[i]<<" ";
    }
    cout<<endl;
    
}