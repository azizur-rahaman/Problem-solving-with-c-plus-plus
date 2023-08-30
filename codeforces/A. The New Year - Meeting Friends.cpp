#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr, arr+3);

    int result = (arr[1]-arr[0])+(arr[2]-arr[1]);
    cout<<result<<endl;
    
}