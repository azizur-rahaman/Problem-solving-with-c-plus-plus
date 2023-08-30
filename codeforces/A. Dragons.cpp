#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int k_strength,n, pd=0, counter=0;
    cin>>k_strength>>n;
    
    pair<int,int> p[1000];

   
    for ( int i=0; i < n; i++)
    {
       cin>>p[i].first>>p[i].second;
    }

    sort(p,p+n);
    for (int i = 0; i < n; i++)
    {
        if(k_strength<=p[i].first){
            counter++;
            break;
        }else{
            k_strength+=p[i].second;
        }
    }

    if(counter>0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    
    

}