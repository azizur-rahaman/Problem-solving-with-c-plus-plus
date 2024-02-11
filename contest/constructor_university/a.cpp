#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define c cout<<
#define e <<endl

int main(){
    ll t;
    cin>> t;

    while (t--)
    {
        ll x,y,z;
        cin>>x>>y>>z;

        if( (x == z) || (y == z) || ( (x+y) / 2) == z) c "YES" e;
        else c "NO" e;
    }

    return 0;
    
}