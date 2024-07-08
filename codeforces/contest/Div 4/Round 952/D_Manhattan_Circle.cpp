#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <utility>
#include <cstring>
#include <ctime>
#include <queue>
#include <cmath>
#include <stack>
using namespace std;

#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii> >
#define vvi			       vector<vector<int> >
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"

#define fori(n)    for(int i = 0; i < n; i++)
#define forir(n)    for(int i = n-1; i >=0 ; i--)
#define forij(n) for(int i = 0; i < n; i++) for(int j = 0; j < n; j++)
#define YES            cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define cinvi(n,vect)    for(int i= 0; i<n; i++){ int temp; cin>>temp; vect.pb(temp);}


#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl

inline int power(int a, int b)
{
	int x = 1;
	while (b)
	{
		if (b & 1) x *= a;
		a *= a;
		b >>= 1;
	}
	return x;
}

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<char> > grid(n, vector<char>(m));
    vpi ans;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
            if (grid[i][j] == '#') {
                ans.push_back({i, j});
            }
        }
    }

    long long sum_x = 0, sum_y = 0;

    for (auto p : ans) {
        sum_x += p.F;
        sum_y += p.S;
    }

    int h = sum_x / ans.size();
    int k = sum_y / ans.size();

    cout << h + 1 << " " << k + 1 << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
