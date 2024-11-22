#include<iostream>
#include<vector>
using namespace std;

#define int long long
#define vi vector<int>
#define vii vector<vi>

void solve() {
    int n,m;
    cin>>n>>m;

    int ans = 0;

    int i = 2;
    vi arr;
    int cnt = 0;
    int j = 0;

    while(j < n){
        if(cnt < n){
            if(cnt + i < n){
                arr.push_back(0);
                if(sizeof(arr)/sizeof(int) < n)
                arr.push_back(i), cnt += i;
            }else{
                arr.push_back(0);
                if(sizeof(arr)/sizeof(int) < n)
                arr.push_back(1), cnt += 1;
                
            }
        }
        j += 2;
        i += 1;
        
    }

    for(int i=0; i < sizeof(arr)/sizeof(int); i++){
        cout<<arr[i]<<endl;
    }

    cout<<endl<<endl;
}

int32_t main(){
    int t=1;
    cin>>t;

    while(t--) solve();

}