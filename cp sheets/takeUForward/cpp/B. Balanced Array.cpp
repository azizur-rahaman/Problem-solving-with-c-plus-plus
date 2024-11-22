#include<iostream>
#include<vector>
using namespace std;

#define int long long
#define vi vector<int>
#define vii vector<vi>
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl

void solve() {
    int n;
    cin>> n;

    if(n%2 == 1){
        NO;
        return;
    }

    vi even;
    int cntEven = 0;
    vi odd;
    int cntOdd = 0;

    for(int i=1; i <= n; i++){
        if(i%2 == 0){
            even.push_back(i);
            cntEven += i;
        }else{
            odd.push_back(i);
            cntOdd += i;
        }
    }

    if(cntEven == cntOdd){
        YES;

        for(int x : even)
            cout<<x<<" ";

        for(int x : odd)
            cout<<x<<" ";
    }

    int distance = cntEven - cntOdd;

    if(distance % 2 == 1){
        NO;
    }else{
        YES;
        for(int x : even)
            cout<<x<<" ";

        for(int i=0; i<(n/2) - 1; i++){
            cout<<odd[i]<<" ";
        }

        cout<<odd[(n/2)-1]+distance<<endl;
    }


}

int32_t main(){
    int t=1;
    cin>>t;

    while(t--) solve();

}