#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, evenc=0, indexE=0, indexO;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==0) {
            evenc++;
            indexE=i;
        }else {
            indexO=i;
        }
    }
    
    if(evenc==1) cout<<(indexE+1)<<flush;
    else cout<<(indexO+1)<<flush;
    
}