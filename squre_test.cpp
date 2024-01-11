#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPerfectSquare(ll n) {
    ll sqrt_n = sqrt(n);
    return sqrt_n * sqrt_n == n;
}


int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n, total=0;
        cin >> n;

        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin>>temp;
            total+=temp;
        }

        if(isPerfectSquare(total)) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }

    }
}