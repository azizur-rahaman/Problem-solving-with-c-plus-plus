#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b%a, a);
}

int32_t main(){
	
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	clock_t z = clock();

    int a,b;
    cin>>a>>b;

    cout<<gcd(a,b)<<endl;

}