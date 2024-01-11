#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;

    while (t--)
    {
        ll n;

        cin>>n;
        ll arr[n];

        for (int i = 0; i < n; i++) cin>>arr[i];
        
        
        bool found=false;

        for (int i = 0; i < n; i+=2)
        {   
            
            ll  oddT=0, evenT=0;
            bool isOdd=true;

            for (int j=i; j<=n; j++)
            {
                if(isOdd){
                    oddT+=arr[i];
                    isOdd=false;
                }else{
                    evenT+=arr[i];
                    isOdd=true;
                }
            }

           
            if(oddT<=evenT && evenT <=n){
                cout<<"YES"<<endl;
                found = true;
                break;
            }
        }
        if(found==false) cout<<"NO"<<endl;
        


    
    }
}