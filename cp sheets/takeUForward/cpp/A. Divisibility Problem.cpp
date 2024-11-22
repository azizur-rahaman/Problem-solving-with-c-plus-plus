#include <iostream>
#include <vector>
using namespace std;

#define int long long
#define vi vector<int>
#define vii vector<vi>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve() {
    int a,b;
    cin>>a>>b;

    if(a%b == 0){
        cout<<0<<endl;
        return;
    }

    int ans = b - (a%b);
    cout<<ans<<endl;
}

int32_t main() {
    int t = 1;
    cin >> t;

    while (t--) solve();

    return 0;
}
