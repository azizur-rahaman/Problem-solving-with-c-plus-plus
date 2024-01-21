#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll t, counter=0;
    cin>>t;

    while (t--)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        
        if(x==1 && y==1) counter++;
        else if( x==1 && z==1) counter++;
        else if(y == 1 && z == 1) counter++;
    }

    cout<<counter<<endl;
    
}