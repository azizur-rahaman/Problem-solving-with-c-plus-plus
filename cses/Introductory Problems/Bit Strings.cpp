#include <bits/stdc++.h>
using namespace std;

#define MODULUS 1000000007

int main() {
    int n, answer = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        answer *= 2;
        answer %= MODULUS;
    }
    cout << answer;
}
