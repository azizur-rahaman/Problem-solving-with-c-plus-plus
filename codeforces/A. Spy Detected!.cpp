#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin>>arr[i];
        }
        int i = 1;
        for (i; i <n-1 ; ++i) {
            if (arr[i]!=arr[i-1] && arr[i]!=arr[i+1]){
                cout<<i+1<<"\n";
               break;
            }
        }
        if (i==n-1){
            if (arr[0]!=arr[1]){
                cout<<1<<"\n";
            } else{
                cout<<n<<"\n";
            }
        }
    }
    
}