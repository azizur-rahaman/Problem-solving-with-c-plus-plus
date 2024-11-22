#include <iostream>
#include <vector>
#include<set>
using namespace std;

#define int long long
#define vi vector<int>
#define vii vector<vi>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve() {
    int a,b;
    cin>>a>>b;

    cout << (abs(a - b) + 9) / 10 << endl;
    
}

int32_t main() {
    int t = 1;
    cin >> t;

    while (t--) solve();

    return 0;
}