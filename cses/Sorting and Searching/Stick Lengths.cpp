#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, m_total_cost=0;
    cin>>n;

    ll arr[n];

    for (ll i = 0; i < n; i++) cin>>arr[i];

    sort(arr,arr+n);

    ll mid = arr[n/2];

    for (ll i = 0; i < n; i++)
    {
        m_total_cost+= abs(arr[i]-mid);
    }
    
    cout<<m_total_cost<<endl;
    
}