#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ll t, hired=0, crimes=0, untreated=0;
    cin>>t;

    while (t--)
    {   
        ll n;
        cin>>n;

        if(n == -1) {
            if(hired>=1) hired--;
            else untreated++;          
        }else hired+=n;
    }
    cout<<untreated<<endl;
}
