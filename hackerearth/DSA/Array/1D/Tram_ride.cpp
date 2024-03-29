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
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"

#define YES            cout<<"YES"<<endl
#define NO             cout<<"NO"<<endl
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

const int N = 200005;

void solve() {
	int n, s,e, sum1 = 0, sum2 = 0;
	cin >> n >> s>>e;

    vi vect;
	cinvi(n,vect);

    s=s-1;
    e=e-1;

    int count=0;
    int temp=0;

    if(s<=e){
    for(int i=s;i<e;i++){
        count+=vect[i];
    }
    
    for(int i=0;i<s;i++){
        temp+=vect[i];
    }
    for(int i=e;i<vect.size();i++){
        temp+=vect[i];
    }
    cout<< min(temp,count) <<endl;
    return;
    }
    
    for(int i=e;i<s;i++){
        count+=vect[i];
    }
    
    for(int i=0;i<e;i++){
        temp+=vect[i];
    }
    for(int i=s;i<vect.size();i++){ 
        temp+=vect[i];
    }
    cout<< min(temp,count) <<endl;

    
}

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	clock_t z = clock();


	int t = 1;
	// cin >> t;
	while (t--) solve();

	// cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

	return 0;
}