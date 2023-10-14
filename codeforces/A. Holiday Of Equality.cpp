#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, result=0;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    for (int i = 0; i < n; i++)
    {
        result+=arr[n-1]-arr[i];
    }

    cout<<result<<endl;   
}