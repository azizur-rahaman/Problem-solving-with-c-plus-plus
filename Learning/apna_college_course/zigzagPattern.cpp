#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int rowNum = 3;

    for (int i = 1; i <= rowNum; i++) {
        for (int j = 1; j <= n; j++) {
            // We introduce a boolean flag to check the conditions for printing '*'
            bool printAt = ((i + j) % 4 == 0) || (i == 2 && j % 4 == 0);

            if (printAt) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        // Add a line break after each row is printed
        cout << endl;
    }

    return 0;
}
