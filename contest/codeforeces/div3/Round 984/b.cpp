#include<iostream>
#include<vector>
#include<map>
#include<set>

    
using namespace std;

typedef long long int;         // Define a name for long long int
typedef vector<int> vi;       // Define vi as vector<int>
typedef vector<vi> vvi;       // Define vvi as vector of vector<int>
typedef pair<int, int> pii;   // Define pii as pair<int, int>
typedef map<int, int> mii;    // Define mii as map<int, int>

void solve(){
    int x,y;
    cin>>x>>y;

    mii mp;

    for(int i=0; i<x; i++){
        int a,b;
        cin>>a>>b;

        mp[a] += b;
    }

    int ans = 0;

    vi arr;

    for(auto it : mp){
        arr.push_back(it.second);
    }

    sort(arr.begin(), arr.end());

    int cnt =0;

    int i = arr.size()-1;

    for(int j=0; j<x; j++){
        cnt += arr[i];
        i--;
    }

    cout<<cnt<<endl;

}

int32_t main(){

    int t=1;
    cin>>t;

    while(t--) solve();

}