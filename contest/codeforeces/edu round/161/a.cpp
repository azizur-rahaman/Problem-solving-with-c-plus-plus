#include <iostream>
#include <string>

using namespace std;

string is_matching_template(int n, const string& a, const string& b, const string& c) {
    for (int i = 0; i < n; ++i) {
        if (a[i] == b[i] && a[i] != c[i]) {
            return "YES";
        } else if (a[i] != b[i] && a[i] == c[i]) {
            return "NO";
        }else if( a[i] != b[i] && a[i] != c [i]) return "YES";
    }
    return "NO";
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        string a, b, c;
        cin >> a >> b >> c;

        string result = is_matching_template(n, a, b, c);
        cout << result << endl;
    }

    return 0;
}
