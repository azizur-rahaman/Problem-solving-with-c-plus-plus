#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;
    
    while (t--)
    {
        ll n, counter = 0, max_count=INT_MIN, min_count=INT_MAX;
        vector<int> vect;

        cin>>n;
        while (n--)
        {
            ll x,y;
            cin>>x>>y;
            if(x==1) max_count = max(max_count, y);
            else if(x==2) min_count = min(min_count, y);
            else {
                vect.push_back(y);
            }
        }

        
        for (auto i : vect )
        {
            if(i>= max_count && i <= min_count) counter++;
        }
        if(max_count >= (min_count + counter + 1)) cout<<0<<endl;
        else cout<<(min_count - max_count - counter + 1)<<endl;

    }
    


}