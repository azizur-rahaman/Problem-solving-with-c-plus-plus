// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int i, counter = 0;
//         cin >> i;

//         while (i--) {
//             int temp;
//             cin >> temp;
//             counter += temp;
//         }
//         if (counter % 2 != 0) cout << "YES" << endl;
//         else cout << "NO" << endl;
//     }

//     return 0;
// }





#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool isOdd = 0, isEven = 0;
        for (int i = 0; i < n; ++i) {
            int temp;
            cin >> temp;

            if (temp % 2 == 0) isEven = 1;
            else isOdd = 1;
        }

        if (isOdd && isEven) {
            cout << "YES" << endl;
        } else if (isOdd && n % 2 != 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
