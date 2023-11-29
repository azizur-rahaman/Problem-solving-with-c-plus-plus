#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int x, y, k;
        cin >> x >> y >> k;

        int distance = abs(x - y);

        if (k >= distance) {
            cout << x + k << '\n';
        } else {
            int time_for_key = k;
            int chest_time = distance;
            cout << x + time_for_key + chest_time << '\n';
        }
    }

    return 0;
}
