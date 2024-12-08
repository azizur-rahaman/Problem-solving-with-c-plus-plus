#include<iostream>
#include<bitset>
#include<cmath>
using namespace std;

void solve(){
    string ss;
    cin>>ss;

    int n = ss.length();

    bitset<64> bits;
    bits = bitset<64>(ss);

    unsigned long number = bits.to_ulong();
    cout<<ceil(sqrt(sqrt(number)));


}

int main(){
    int T = 1;
    // cin>>T;

    while(T--) solve();
}