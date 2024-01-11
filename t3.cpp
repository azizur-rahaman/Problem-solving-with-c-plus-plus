#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        string word;
        cin >> word;

        string result;
        for (int i = 0; i < n; i++) {

            if ((i > 0 && (word[i] == 'a' || word[i] == 'e')) || (i < n - 1 && word[i] == 'b' && word[i + 1] == 'a')) {
                result += '.';
            }
            result += word[i];
        }

        std::cout << result << std::endl;
    }

    return 0;
}
