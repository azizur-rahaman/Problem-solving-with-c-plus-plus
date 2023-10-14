#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int n,k,result=0;
    cin>>n;
    long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr+n);
    
    long long int t;
    cin>>t;
    while (t--)
    {
        cin>>k;
        result=upper_bound(arr,arr+n, k)-arr;
        cout<<result<<endl;
    }
}
