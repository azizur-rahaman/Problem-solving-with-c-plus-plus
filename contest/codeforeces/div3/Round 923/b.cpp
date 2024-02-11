#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin>>n;
        string ans;
        vector<int> freq(26, 0), ar(n);

        for (ll i = 0; i < n; i++)
        {
            cin>> ar[i];

            for (char k = 'z'; k > 'a'; k--)
            {
                if(freq[k-'a'] == ar[i] - 1){
                    freq[k]
                }
            }
            
        }
        

    }
    return 0;
}
