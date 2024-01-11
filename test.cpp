#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isItPerfectSquare(ll n){

    ll r = sqrt(n);

    return r * r == n;
}

int main(){
    ll t;
    cin>>t;

    while (t--)
    {
        ll n, sum=0;
        cin>>n;

        while (n--)
        {   
            ll temp;
            cin>>temp;

            sum+= temp;
        }

        bool result = isItPerfectSquare(sum);

        if(result) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        

    }

}

