#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){


    ll n;
    
    cin>>n;


    while (n--)
    {
        ll a,b;
        cin>>a>>b;
        ll result = abs(a-b);

        if(result % 2 == 1) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;

    }
    

}