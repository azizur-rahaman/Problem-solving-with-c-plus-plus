#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n, k, x;
        cin >> n >> k >> x;

        vector<ll> vect(n);
        for (ll i = 0; i < n; i++)
            cin >> vect[i];

        sort(vect.begin(), vect.end());

        ll total = 0;

        ll t_index = n - x;
        for (ll i = 0; i < n; i++) {
            if (i < t_index)
                total += vect[i];
            else
                total -= vect[i];
        }

        ll ans = total;

        for (ll i = n - 1; i >= n - k; i--) {
            if (i >= t_index) {
                total += vect[i];

                if (t_index - 1 >= 0)
                    total -= 2 * vect[t_index - 1];

                t_index--;

                ans = max(total, ans);
            }
        }

        cout << ans << endl;
    }

    return 0;
}










#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;

        // Read the array elements
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
            cin >> a[i];

        // Sort the array in ascending order
        sort(a.begin(), a.end());

        long long sum = 0;

        // Calculate the initial sum based on the value of x
        long long indexes = n - x;
        for (long long i = 0; i < n; i++) {
            if (i < indexes)
                sum += a[i];
            else
                sum -= a[i];
        }

        // Initialize the answer with the initial sum
        long long ans = sum;

        // Iterate through the array in reverse order
        for (long long i = n - 1; i >= n - k; i--) {
            if (i >= indexes) {
                sum += a[i];

                // Adjust the sum by subtracting twice the element at indexes - 1
                if (indexes - 1 >= 0)
                    sum -= 2 * a[indexes - 1];

                // Move the index to the left
                indexes--;

                // Update the answer with the maximum sum
                ans = max(sum, ans);
            }
        }

        // Output the answer for the current test case
        cout << ans << endl;
    }

    return 0;
}