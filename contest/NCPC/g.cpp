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

const int N = 200005;

void generateSubsequences(vector<int>& arr, vector<int>& subsequence, int index) {
    if (index == arr.size()) {
        cout << "[";
        for (int i = 0; i < subsequence.size(); ++i) {
            cout << subsequence[i];
            if (i != subsequence.size() - 1)
                cout << ", ";
        }
        cout << "]" << endl;
        return;
    }

    subsequence.push_back(arr[index]);
    generateSubsequences(arr, subsequence, index + 1);

    subsequence.pop_back();
    generateSubsequences(arr, subsequence, index + 1);
}



void solve() {
	int n;
    cin>>n;
    
    int x = -1;
    int y = 0;

    int arr_1[n];
    int arr_2[n];

    vi subsequence1;
    vi subsequence2;

    for (int i = 0; i < n; i++)
        cin>>arr_1[i];

    for (int i = 0; i < n; i++)
        cin >> arr_2[i];
    

    if(arr[i] != temp && x == -1) x = temp;
    else if( arr[i] != temp ) y = temp;

    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    


    cout<< (x - y) <<endl;

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