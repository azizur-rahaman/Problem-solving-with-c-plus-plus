#include <iostream>
#include <vector>
#include <algorithm> // for __gcd
#include <numeric> // for gcd
#include <ios> // for ios_base::sync_with_stdio
#include <utility> // for pair
#include <map> // for map

using namespace std;

#define int long long int
#define F first
#define S second
#define pb push_back
#define si set<int>
#define vi vector<int>
#define pii pair<int, int>
#define vpi vector<pii>
#define vpp vector<pair<int, pii>>
#define vvi vector<vector<int>>
#define mii map<int, int>
#define mpi map<pii, int>
#define spi set<pii>
#define endl "\n"

#define fori(n) for (int i = 0; i < n; i++)
#define forir(n) for (int i = n - 1; i >= 0; i--)

#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

const int N = 200005;

bool check(const string& ss) {
    int n = ss.size();
    for (int i = 0; i < n; i++) {
        if (ss[i] < '5' || ss[i] > '9') {
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;

    int a, b;
    if (n % 2 == 0) {
        a = n / 2;
        b = n / 2;
    } else {
        a = n / 2;
        b = n / 2 + 1;
    }

    bool flag = false;

    while (a >= 0 && b <= n) {
        if (check(to_string(a)) && check(to_string(b)) && a + b == n) {
            flag = true;
            break;
        }
        a--;
        b++;
    }

    if (flag) {
        YES;
    } else {
        NO;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
