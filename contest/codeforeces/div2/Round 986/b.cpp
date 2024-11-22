#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string ss;
        cin >> n >> ss;

        int zero = 0, one = 0;
        for (auto& c : ss) {
            if (c == '0') {
                zero++;
            } else {
                one++;
            }
        }

        if (zero >= 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
