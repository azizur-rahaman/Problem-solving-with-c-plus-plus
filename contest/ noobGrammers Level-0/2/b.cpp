#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main(){
    
    ll t;
    cin>>t;

    while (t--)
    {   

        ll a,b,c,d, x1,x2;
        bool flag = false;

        cin>>a>>b>>c>>d;

        if(a>b) x1 = a;
        else x1 = b;

        if(c>d) x2 = c;
        else x2 = d;

        if(x1==a) x2<b? flag=true: 0;
        if(x1==b) x2<a? flag=true: 0;
        if(x2==c) x1<d? flag=true: 0;
        if(x2==d) x1<c? flag=true: 0;

        
        if(flag == false) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    
    
}