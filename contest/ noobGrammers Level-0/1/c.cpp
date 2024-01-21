#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main(){
    
    ll t;
    cin>>t;

    while (t--)
    {   

        ll n,remaining_c=0, last_c=0, temp=0;
        cin>>n;

        bool flag = false;
        
        while (n--)
        {
            char c;
            cin>>c;
            
            if(c != ')'){
                if(flag==false){
                    remaining_c+=temp;
                    flag=true;
                    temp=0;
                }

                remaining_c++;

            }else {
                flag = false;
                last_c++;
                temp++;
            }
        }
        
        
        
        if(last_c>remaining_c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    
    
}