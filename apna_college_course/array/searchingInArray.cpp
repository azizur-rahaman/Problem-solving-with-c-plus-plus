#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int value){

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==value) return i;
    }
    return -1;
    
}
int main(){
    int n;
    cout<<"Enter your array size: ";
    cin>>n;
    int arr[n];
    
    cout<<"Enter array elements:"<<endl;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }

    int value;
    cout<<"what you want to search: ";
    cin>>value;

    cout<<linearSearch(arr,n, value);
    
}