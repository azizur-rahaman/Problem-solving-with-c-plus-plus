#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;

    while (t--)
    {
        ll n,m,k, n_count = 0, m_count = 0;
        cin>>n>>m>>k;
        ll index = k / 2;

        for (int i = 1; i <= n; i++)
        {
            int temp;
            cin>>temp;

            if(temp <= k && n_count < index){
                n_count++;
            }
        }

        for (int i = 1; i <= m; i++)
        {
            int temp;
            cin>>temp;

            if(temp <= k && m_count < index){
                m_count++;
            }
        }
        

        // cout<< "k: "<< k << " index" << index << endl;
        // cout<< "n: " << n_vect[index] << " m: "<< m_vect[index] << endl; 

        

        if(n_count >= index && m_count >= index) cout<<"YES"<<endl;
        else cout<< "NO"<<endl;

    }

    return 0;
    
}