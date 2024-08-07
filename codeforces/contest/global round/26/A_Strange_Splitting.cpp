#include <iostream>
#include <vector>
#include <algorithm> // for __gcd
#include <numeric>   // for gcd
#include <ios>       // for ios_base::sync_with_stdio
#include <utility>   // for pair
#include <map>

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

void solve()
{
    int n;
    cin >> n;
    vi arr(n);
    fori(n)
            cin >>
        arr[i];

    if (arr[0] == arr[n - 1])
    {
        NO;
        return;
    }

    YES;
    string s(n, 'R');
    s[1] = 'B';
    cout << s << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
