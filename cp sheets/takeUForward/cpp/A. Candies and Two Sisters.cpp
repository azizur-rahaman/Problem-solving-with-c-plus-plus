#include <iostream>
#include <vector>
using namespace std;

#define int long long
#define vi vector<int>
#define vii vector<vi>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve() {
    int n;
    cin>>n;

    int ans = n/2;

    if(n % 2 == 0)
        ans -= 1;
    
    cout<<ans<<endl;
}

int32_t main() {
    int t = 1;
    cin >> t;

    while (t--) solve();

    return 0;
}
