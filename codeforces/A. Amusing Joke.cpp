#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string str1, str2, inscriptions;
    cin >> str1 >> str2 >> inscriptions;

    string combined = str1 + str2;
    sort(combined.begin(), combined.end());
    
    sort(inscriptions.begin(), inscriptions.end());



    if (combined == inscriptions) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
