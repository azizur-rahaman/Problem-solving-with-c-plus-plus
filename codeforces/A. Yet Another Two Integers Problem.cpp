#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    {     
        int a,b;
        cin>>a>>b;
        if(a==b) cout<<0<<endl;
        else
        {
            int max_n=max(a,b);
            int min_n=min(a,b);
            cout<<abs(max_n-min_n)/10+(abs(max_n-min_n)%10>0?1:0)<<endl;
        }
    }
    
}