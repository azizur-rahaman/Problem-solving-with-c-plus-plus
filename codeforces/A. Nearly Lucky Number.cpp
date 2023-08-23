#include <bits/stdc++.h>
using namespace std;

int main() {
    string n_str;

    cin >> n_str;
    int count = 0;

    for (int i = 0; i < n_str.length(); i++) {
        if (n_str[i] == '4' || n_str[i] == '7') {
            count++;
        }
    }

    cout << ((count == 4 || count == 7) ? "YES" : "NO") << endl;

    return 0;
}
