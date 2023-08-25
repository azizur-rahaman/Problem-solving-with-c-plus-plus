#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, k,mid_index,result;
    cin>>n>>k;

    if(n%2==0) mid_index= n/2;
    else mid_index= (n/2)+1;

    if(k<=mid_index) result = (2*k)-1;
    else result= (k-mid_index)*2;

    cout<<result<<endl;
    return 0;
}
