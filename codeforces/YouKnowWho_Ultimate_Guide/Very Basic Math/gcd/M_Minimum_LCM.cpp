#include <iostream>
#include <vector>
#include <algorithm> // for __gcd
#include <numeric> // for gcd
#include <ios> // for ios_base::sync_with_stdio
#include <utility> // for pair

using namespace std;

#define int long long int
#define F first
#define S second
#define pb push_back
#define si set<int>
#define vi vector<int>
#define pii pair<int, int>
#define vpi vector<pii>
#define vpp vector<pair<int, pii>>
#define vvi vector<vector<int>>
#define mii map<int, int>
#define mpi map<pii, int>
#define spi set<pii>
#define endl "\n"

#define fori(n) for (int i = 0; i < n; i++)
#define forir(n) for (int i = n - 1; i >= 0; i--)

#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

const int MAXN = 1000000LL; 
std::vector<bool> isPrime(MAXN + 1, true);
std::vector<int> primes;

// void sieve(int n) {
//     isPrime[0] = isPrime[1] = false; 
//     for (int i = 2; i * i <= n; ++i) {
//         if (isPrime[i]) {
//             for (int j = i * i; j <= n; j += i) {
//                 isPrime[j] = false;
//             }
//         }
//     }
//     for (int i = 2; i <= n; ++i) {
//         if (isPrime[i]) {
//             primes.push_back(i);
//         }
//     }
// }

void solve(){
    int n;
    cin >> n;
    if(n % 2 == 0){
        cout << n / 2 << " " << n / 2 << endl;
    } else {
        int res = n-1;

              
        
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;
    cin >> t;

    while (t--) {
        solve();
    }


    return 0;
}
