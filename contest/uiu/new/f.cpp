#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> vint(4);
    for (int i = 0; i < 4; ++i) {
        cin >> vint[i];
    }

    sort(vint.begin(), vint.end());

    int a = vint[3] - vint[1];
    int b = vint[3] - vint[2];
    int c = vint[3] - vint[0];

    cout << a << " " << b << " " << c << endl;

    return 0;
}
