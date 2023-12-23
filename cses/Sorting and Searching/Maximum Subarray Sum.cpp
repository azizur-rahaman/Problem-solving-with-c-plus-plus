#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n;
    cin >> n;

    vector<ll> arr(n); 

    for (ll i = 0; i < n; i++) {
        cin >> arr[i];  
    }

    ll max_sum = LLONG_MIN, curr_sum = 0; 
    for (auto num : arr) {
        curr_sum += num;
        max_sum = max(curr_sum, max_sum);
        if (curr_sum < 0) curr_sum = 0;
    }

    cout << max_sum << endl;
    return 0;
}
