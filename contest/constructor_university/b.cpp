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

        if( (z == 0 && ((x%10) + (y%10) == 10) ) || (((x%10) + (y%10)) % z == 0)) c "YES" e;
        else c "NO" e;
    }

    return 0;
    
}