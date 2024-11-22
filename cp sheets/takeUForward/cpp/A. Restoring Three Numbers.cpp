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
    vi arr;

    for(int i=0; i<4; i++){
        int temp;
        cin>>temp;

        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());

    int a = arr[3] - arr[0];
    int b = arr[3] - arr[1];
    int c = arr[3] - arr[2];


    cout<<a<<" "<<b<<" "<<c;
}

int32_t main() {
    int t = 1;
    // cin >> t;

    while (t--) solve();

    return 0;
}
