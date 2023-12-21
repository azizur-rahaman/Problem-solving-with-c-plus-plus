#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll n, x;
	cin >> n >> x;

	vector<ll> values(n);
	for (ll i = 0; i < n; i++) cin >> values[i];
 
    
    map<ll, ll> value_check;
    for (int i = 0; i < n; i++)
    {
        if(value_check.count(x - values[i])){
            cout<< i+1 << " " << value_check[x - values[i]];
            return 0;
        }

        value_check[values[i]] = i+1;
    }
    
	cout << "IMPOSSIBLE" << endl;
}