#include<bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin>>n>>k;

    int arrp[n];
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        int idx = (i+n-(k%n))%n;
        arrp[idx] = arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arrp[i]<<" ";
    }
    
    return 0;
}