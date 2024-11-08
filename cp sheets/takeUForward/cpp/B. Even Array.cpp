#include<iostream>
#include<vector>
using namespace std;

#define int long long
#define vi vector<int>
#define vii vector<vi>


void solve() {
    int n;
    cin >> n;
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;

        if (temp % 2 != i % 2) {
            if (i % 2 == 0) even++;
            else odd++;
        }
    }

    if (even != odd) cout << -1 << endl;
    else cout << even << endl;
}

int32_t main(){
    int t=1;
    cin>>t;

    while(t--) solve();

}