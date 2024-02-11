#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;

    while (t--)
    {   
        ll n, b_start=0, b_end=0;
        cin>>n;

        for(int i = 1; i <= n; i++)
        {
            char c;
            cin>>c;

            if(c=='B' && b_start==0){
                b_start = i;
            }else{
                if(c == 'B'){
                    b_end = i;
                }
            }
        }
            if(b_end == 0) cout<<1<<endl;
            else cout<< abs(b_start - b_end) +  1 <<endl;
    }



}