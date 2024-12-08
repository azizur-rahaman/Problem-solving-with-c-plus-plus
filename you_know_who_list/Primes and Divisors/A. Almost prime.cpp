
// ? SHAHJALAL SHOHAG VAI

// #include<bits/stdc++.h>
// using namespace std;

// const int N = 1e6 + 9;

// vector<int> primes;
// bool is_prime[N]; 
// // use bitset<N> is_prime; to have O(N/64) memory complexity
// // using bitset you can solve upto around N = 10^8 in 1s
// void sieve_v0() {
//   for (int i = 2; i < N; i++) {
//     is_prime[i] = true;
//   }
//   for (int i = 2; i * i < N; i++) {
//     if (is_prime[i]) {
//       for (int j = i * i; j < N; j += i) {
//         is_prime[j] = false;
//       }
//     }
//   }
//   for (int i = 2; i < N; i++) {
//     if (is_prime[i]) {
//       primes.push_back(i);
//     }
//   }
// }

// // sieve with smallest prime factors (spf)
// int spf[N];
// void sieve() {
//   for (int i = 2; i < N; i++) {
//     spf[i] = i;
//   }
//   for (int i = 2; i * i < N; i++) {
//     if (spf[i] == i) {
//       for (int j = i * i; j < N; j += i) {
//         spf[j] = min(spf[j], i);
//       }
//     }
//   }
//   for (int i = 2; i < N; i++) {
//     if (spf[i] == i) {
//       primes.push_back(i);
//     }
//   }
// }

// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   sieve_v0();
//   cout << primes.size() << '\n';
//   primes.clear();
//   sieve();
//   cout << primes.size() << '\n';
//   return 0;
// }


// ? #OPTIMIZED SIEVE

#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

const int N = 1e8; // Adjust based on the problem
bitset<N> is_prime; // Uses 1 bit per number
vector<int> primes;

void sieve_optimized() {
    is_prime.set(); // Set all bits to 1 (initially assume all are prime)
    is_prime[0] = is_prime[1] = 0; // 0 and 1 are not prime

    for (int i = 2; i * i < N; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < N; j += i) {
                is_prime[j] = 0; // Mark multiples of i as non-prime
            }
        }
    }

    // Collect all primes into the vector
    for (int i = 2; i < N; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
}

vector<int> find_divisors(int n) {
    vector<int> divisors;
    vector<pair<int, int>> factors;

    // Factorize n using primes
    for (int p : primes) {
        if (p * p > n) break;
        int count = 0;
        while (n % p == 0) {
            n /= p;
            count++;
        }
        if (count > 0) {
            factors.push_back({p, count});
        }
    }
    if (n > 1) {
        factors.push_back({n, 1}); // Remaining prime factor
    }

    // Generate all divisors
    divisors.push_back(1);
    for (auto &[prime, exp] : factors) {
        int size = divisors.size();
        int factor = 1;
        for (int e = 0; e < exp; e++) {
            factor *= prime;
            for (int i = 0; i < size; i++) {
                divisors.push_back(divisors[i] * factor);
            }
        }
    }

    return divisors;
}


int main() {
    sieve_optimized();
    int n;
    cin>>n;

    vector<int> arr = find_divisors(n);

    for(int x : arr)
        cout<<x<<endl;
    
    if(arr.size() == 4 && is_prime(arr[1]) && is_prime(arr[2]))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}
