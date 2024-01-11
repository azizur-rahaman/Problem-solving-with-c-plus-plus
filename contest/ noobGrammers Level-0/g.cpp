#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
   ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll a = 0,b = 1;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(a == j || b == j) cout<<1<<" ";
                else cout<<0<<" ";
            }
            
            cout<<endl;
            a++;
            b++;

            if(a == n)a = 0;
            if(b == n)b = 0;
        }
    }

    return 0;
}