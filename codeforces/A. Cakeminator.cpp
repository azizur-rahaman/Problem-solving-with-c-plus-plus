#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    
    vector<string> cake(n);
    vector<bool> eRow(n, true), eCol(x, true);
    
    for (int i = 0; i < n; ++i) {
        cin >> cake[i];
        for (int j = 0; j < x; ++j) {
            if (cake[i][j] == 'S') {
                eRow[i] = false;
                eCol[j] = false;
            }
        }
    }

    int totalEaten = 0;
    for (int i = 0; i < n; ++i) {
        if (eRow[i]) totalEaten += x;
    }

    for (int j = 0; j < x; ++j) {
        if (eCol[j]) {
            for (int i = 0; i < n; ++i) {
                if (!eRow[i]) totalEaten++;
            }
        }
    }

    cout << totalEaten << endl;

    return 0;
}
