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
#define vvi            vector<vector<int>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"

#define fori(n)        for(int i = 0; i < n; i++)
#define forir(n)       for(int i = n-1; i >=0 ; i--)
#define forij(n)       for(int i = 0; i < n; i++) for(int j = 0; j < n; j++)
#define YES            cout<<"YES"<<endl
#define NO             cout<<"NO"<<endl
#define cinvi(n,vect)  for(int i= 0; i<n; i++){ int temp; cin>>temp; vect.pb(temp);}

void solve() {
    int n;
    cin>>n;

    vi arr(n);



   vi arr1,
   vi arr2;

   fori(n){
    int temp = 0;
    cin>>temp;

    if(i % 2 == 0) arr1.push_back(temp);
    else arr2.push_back(temp);
   }
   
}

int32_t main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    
    int t = 1;
    // cin >> t;  
    while (t--) solve();
    
    return 0;
}