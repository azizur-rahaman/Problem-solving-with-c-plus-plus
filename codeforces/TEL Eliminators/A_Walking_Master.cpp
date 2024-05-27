#include <bits/stdc++.h>
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
#define vvi			       vector<vector<int>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"

#define fori(n)    for(int i = 0; i < n; i++)
#define forir(n)    for(int i = n-1; i >=0 ; i--)
#define forij(n) for(int i = 0; i < n; i++) for(int j = 0; j < n; j++)
#define YES            cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define cinvi(n,vect)    for(int i= 0; i<n; i++){ int temp; cin>>temp; vect.pb(temp);}


#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl

inline int power(int a, int b)
{
	int x = 1;
	while (b)
	{
		if (b & 1) x *= a;
		a *= a;
		b >>= 1;
	}
	return x;
}

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

// find prime number
void sieve(int n){ 
    vi primes(n+1, 0);
    vi pr;
    for (int i = 2; i < n; i++)
    {
        if(primes[i] == 0){
            pr.pb(i);
            for (int j = i*i; j < n; j += i)
            {
                primes[j] = 1;
            }        
        }
        primes[i] ^= 1;
    }
    print(pr);    
}


const int N = 200005;

void solve() {


    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    if(x1 == x2 && y1 == y2){
        cout<<0<<endl;
        return;
    }

    if(y1 < y2){
        cout<<-1<<endl;
        return;
    }

    int shift = y2-y1;

    if(x1 < (x1-shift)){
        cout<<-1<<endl;
        return;
    }

    cout<<x1 - (x2-shift)+shift<<endl;



}

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	clock_t z = clock();


	int t = 1;
	cin >> t;
	while (t--) solve();

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

	return 0;
}