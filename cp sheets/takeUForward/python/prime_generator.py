import numpy as np

def sieve_np_range(lower, upper):
    is_prime = np.ones(upper + 1, dtype=bool)
    is_prime[:2] = False  # Set 0 and 1 as non-prime
    for p in range(2, int(upper**0.5) + 1):
        if is_prime[p]:
            is_prime[p * p:upper + 1:p] = False
    # Filter the primes to be within the specified range and print them
    primes_in_range = np.nonzero(is_prime)[0]
    primes_in_range = primes_in_range[primes_in_range >= lower]
    
    for prime in primes_in_range:
        print(prime)
    



n = int(input())

for i in range(n):
    lower, upper = map(int, input().split())
    sieve_np_range(lower, upper)
    print()

