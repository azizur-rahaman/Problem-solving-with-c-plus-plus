#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

class Solution {
private:
    const int MAX = 1e6; 
    bitset<1000000> is_prime;
    vector<int> primes;

    void sieve_optimized() {
        is_prime.set(); 
        is_prime[0] = is_prime[1] = 0; 

        for (int i = 2; i * i < MAX; i++) {
            if (is_prime[i]) {
                for (int j = i * i; j < MAX; j += i) {
                    is_prime[j] = 0; 
                }
            }
        }

        for (int i = 2; i < MAX; i++) {
            if (is_prime[i]) {
                primes.push_back(i);
            }
        }
    }

public:
    Solution() {
        sieve_optimized();
    }

    int countPrimes(int n) {
        if (n <= 2) return 0;

        int count = 0;
        for (int prime : primes) {
            if (prime >= n) break;
            count++;
        }
        return count;
    }
};