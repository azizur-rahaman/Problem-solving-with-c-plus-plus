#include <iostream>
#include <vector>
using namespace std;

int solved() {
    int n;
    cin>>n;

    int ans = 2;
    int max_sum = 0;

    for (int x = 2; x <= n; ++x) {
        int k = n / x;
        int current_sum = x * k * (k + 1) / 2;
        if (current_sum > max_sum) {
            max_sum = current_sum;
            ans = x;
        }
    }

    cout<<ans<<endl;
}

int main() {
    int t;
    std::cin >> t;
    std::vector<int> results(t);

    for (int i = 0; i < t; ++i) {
        solved();
    }


    return 0;
}
