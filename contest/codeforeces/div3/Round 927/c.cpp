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

#define YES            cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define cinvi(n,vect)    for(int i= 0; i<n; i++){ int temp; cin>>temp; vect.pb(temp);}
#define modL            1000000;       

#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()

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
    int n,m, sum = 1;
    cin>>n>>m;
    deque<int> dqqqqq(n);

    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        dqqqqq[i] = x;
        sum = sum * x;
    }
    
    char arr[n];
    for (int i=0;i<n;i++)
        cin>>arr[i];



    cout<< (sum % m) << " ";

    sum = 1;
    for (int i=0;i<n - 1;i++)
    {
        if(arr[i] == 'L') dqqqqq.pop_front();
        else if(arr[i] == 'R') dqqqqq.pop_back();

        for (int j = 0; j < sz(dqqqqq); j++)
        {
            sum = sum * dqqqqq[j];
            
        }

        cout<< (sum % m) << " ";
        sum = 1;
        
    }
    cout << endl;
        
}


int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	clock_t z = clock();


	int t = 1;
	cin >> t;
	while (t--) solve();

	// cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

	return 0;
}