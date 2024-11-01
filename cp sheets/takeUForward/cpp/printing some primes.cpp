#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

#define int long long int
#define vi vector<int>

// Basic Sieve to find primes up to a given limit
vi basic_sieve(int limit) {
    vi primes;
    vector<bool> is_prime(limit + 1, true);
    
    for (int i = 2; i <= limit; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return primes;
}

// Segmented Sieve to find primes in a large range
vi segmented_sieve(int start, int end) {
    int limit = sqrt(end) + 1;
    vi base_primes = basic_sieve(limit);
    vector<bool> is_prime(end - start + 1, true);

    for (int p : base_primes) {
        int begin = max(p * p, (start + p - 1) / p * p);
        for (int j = begin; j <= end; j += p) {
            is_prime[j - start] = false;
        }
    }

    vi primes;
    for (int i = start; i <= end; i++) {
        if (is_prime[i - start] && i > 1) {
            primes.push_back(i);
        }
    }
    return primes;
}

const int SEGMENT_SIZE = 1000000;

void solve() {
    vi primes = segmented_sieve(2, 100000000);

    for (int p : primes) {
        cout << p << " ";
    }
}

int32_t main() {
    solve();
    return 0;
}
