// Add the necessary headers
#include <vector>        // for std::vector
#include <iostream>      // for std::cout, std::cin

using namespace std;

#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define vvi			       vector<vector<int> >



// find prime number
vi sieve(int start, int end) { 
    vi primes(end + 1, 0);
    vi pr;
    for (int i = 2; i <= end; i++) { // Sieve starts at 2
        if (primes[i] == 0) {
            if (i >= start) pr.push_back(i);
            for (int j = i * i; j <= end; j += i) {
                primes[j] = 1;
            }
        }
    }

    // Printing primes within range
    for(auto x : pr) cout<<x<<endl;
    cout<<endl;
    return pr;    
}

const int N = 200005;

void solve() {
    int x1,x2;
    cin>>x1>>x2;

    sieve(x1, x2);
}

int32_t main()
{



	int t = 1;
	cin >> t;
	while (t--) solve();


	return 0;
}