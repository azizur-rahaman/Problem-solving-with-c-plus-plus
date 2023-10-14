#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--)
    {
        int n,m, i=0;
        bool flag=false;

        cin>>n>>m;
        
        for (; i < n; i++)
        {
           int temp;
           cin>>temp;

           if(temp==m) {
                flag=true;
           }
        }
        
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
}