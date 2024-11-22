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
    int cnt = 0;

    cnt += n/5;
    n %= 5;

    cnt += n/4;
    n %= 4;

    cnt += n/3;
    n %= 3;

    cnt += n/2;
    n %= 2;

    cnt += n/1;
    n %= 1;

    cout<<cnt<<endl;
    
}

int32_t main() {
    int t = 1;
    // cin >> t;

    while (t--) solve();

    return 0;
}
