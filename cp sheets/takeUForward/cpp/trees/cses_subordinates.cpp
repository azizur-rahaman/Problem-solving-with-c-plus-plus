#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

#define int long long           // Define int as long long
#define vi vector<int>          // Define vi as vector<int>
#define vvi vector<vi>          // Define vvi as vector of vector<int>
#define pii pair<int, int>      // Define pii as pair<int, int>
#define mii map<int, int>       // Define mii as map<int, int>

void dfs(int v, vvi& adj, vi& dp, vi& visited) {
    int ans = 0;
    visited[v] = 1;
    dp[v] = 1;
    for (int x : adj[v]) {
        if (!visited[x]) {
            dfs(x, adj, dp, visited);
            ans += dp[x];
        }
    }
    dp[v] += ans;
}

void solve() {
    int n;
    cin >> n;

    vvi adj(n + 1);
    int st = 2;

    for (int i = 0; i < n - 1; i++) {
        int k;
        cin >> k;
        adj[k].push_back(st);
        st++;
    }

    vi dp(n + 1, 0);
    vi visited(n + 1, 0);
    dfs(1, adj, dp, visited);

    for (int i = 1; i <= n; i++) {
        cout << dp[i] - 1 << " ";
    }
    cout << endl;
}

signed main() {
    int t = 1;
    // cin >> t;

    while (t--) solve();

    return 0;
}
