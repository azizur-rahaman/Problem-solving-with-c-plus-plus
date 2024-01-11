#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,i;
        ll counter=0;
        cin>>n;


        ll arr[2];

        for(i=2; i*i<n; i++) {

            if(counter == 2) break;
            if(n%i==0)arr[counter++]=i, n/=i;
        }


        if(counter < 2)cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            for (ll i : arr)
            {
                cout<<i<<" ";
            }
            cout<<n<<endl;
            
        }
    }

    return 0;
}

