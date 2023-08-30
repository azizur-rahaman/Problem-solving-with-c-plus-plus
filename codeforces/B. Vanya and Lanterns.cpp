#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,l, distance=0;
    cin>>n>>l;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }

    sort(arr, arr+n);

    for (int i = 0; i < n-1; i++)
    {
        if(arr[i+1]-arr[i]>distance){
            distance=arr[i+1]-arr[i];
        }
    }
    
    double result = max((double)l-arr[n-1], max((double)arr[0],(double) distance/2));

    cout<<fixed<<setprecision(10)<<result<<endl;


    
}