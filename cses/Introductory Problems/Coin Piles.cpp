#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;

    while (t--)
    {
        long long x,y;
        cin>>x>>y;

        if((x+y)%3==0) {
            if(x>y && (x > y+y)) cout<<"NO"<<endl;
            else if(y>x+x) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
        
    }
    
}