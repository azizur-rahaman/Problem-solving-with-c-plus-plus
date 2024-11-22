#include <iostream>
#include <vector>
using namespace std;

#define int long long
#define vi vector<int>
#define vii vector<vi>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve() {
    int row, col;
    cin>>row>>col;

    int ans = (row/2) * col;
    row %= 2;
    
    if(row > 0)
        ans += col/2;

    cout<<ans<<endl;
}

int32_t main() {
    int t = 1;
    // cin >> t;

    while (t--) solve();

    return 0;
}
