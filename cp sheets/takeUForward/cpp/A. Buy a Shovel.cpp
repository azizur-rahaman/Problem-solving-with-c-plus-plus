#include <iostream>
#include <vector>
using namespace std;

#define int long long
#define vi vector<int>
#define vii vector<vi>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve() {
    int k, r;
    cin >> k >> r;

    for (int cnt = 1; cnt <= 10; cnt++) {
        int total = cnt * k;
        if (total % 10 == 0 || (total - r) % 10 == 0) {
            cout << cnt << endl;
            return;
        }
    }
}

int32_t main() {
    int t = 1;
    // cin >> t;

    while (t--) solve();

    return 0;
}
