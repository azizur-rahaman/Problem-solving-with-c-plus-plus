#include <bits/stdc++.h>
using namespace std;

#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define vvi            vector<vector<int>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"

#define fori(n)        for(int i = 0; i < n; i++)
#define forir(n)       for(int i = n-1; i >=0 ; i--)
#define forij(n)       for(int i = 0; i < n; i++) for(int j = 0; j < n; j++)
#define YES            cout<<"Yes"<<endl
#define NO             cout<<"No"<<endl
#define cinvi(n,vect)  for(int i= 0; i<n; i++){ int temp; cin>>temp; vect.pb(temp);}

void solve() {
    int n, m;
    cin >> n >> m;

    vi arr;  
    fori(n) {
        string ss;
        cin >> ss;
        arr.pb(ss.size());
    }

    vi del;
    int x;
    while (del.size() < m && cin >> x) { 
        del.pb(x);
    }

    if (del.empty()) {
        NO;
        return;
    }

    bool flag = true;
    int len = arr[del[0] - 1];  

    for (int i = 0; i < del.size(); i++) {
        if (del[i] <= 0 || del[i] > n || arr[del[i] - 1] != len) {
            flag = false;
            break;
        }else{
            
        }
    }

    if (flag) {
        YES;
        string result(len, '?');  
        cout << result << endl;
    } else {
        NO;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    
    int t = 1;
    // cin >> t;  
    while (t--) solve();
    
    return 0;
}