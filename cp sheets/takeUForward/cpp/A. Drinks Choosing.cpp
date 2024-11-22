#include <iostream>
#include <vector>
#include<map>
using namespace std;

#define int long long
#define vi vector<int>
#define vii vector<vi>
#define mii map<int, int>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve() {
    int n,k;
    cin>>n>>k;

    mii mp;

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;

        mp[temp]++;
    }

    int sets = (n+1)/2; //rounding up
    int cnt = 0;

    bool flag = true;

    int t=2;

    while(t--){
        for(pair<int,int> p : mp){
            if(flag && sets>0){
                int temp = (p.second / 2);
                if(temp <= sets){
                    cnt += temp * 2;
                    sets -= temp;
                }else{
                    cnt += sets * 2;
                    sets = 0;
                }
            }else if(sets>0){

                int temp = p.second;

                if(temp <= sets){
                    cnt += temp * 1;
                    sets -= temp;
                }else{
                    cnt += sets * 1;
                    sets = 0;
                }
            }

        }

        flag=false;
    }

    cout<<cnt<<endl;


}

int32_t main() {
    int t = 1;
    // cin >> t;

    while (t--) solve();

    return 0;
}
