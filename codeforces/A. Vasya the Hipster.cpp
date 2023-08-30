#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int blue_socks, red_shocks;
    cin>>blue_socks>>red_shocks;

    int x = max(blue_socks,red_shocks);
    int y = min(blue_socks,red_shocks);
    cout<<y<<" "<<((x-y)/2)<<endl;
}