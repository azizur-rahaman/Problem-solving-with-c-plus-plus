#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--)
    {
        vector<int> result;
        int n,temp=10;
        cin>>n;

        while (n)
        {   
            int modr = n%temp;
            if(modr) result.push_back(modr);
            n=n-modr;
            temp*=10;
        }
        
        cout<<result.size()<<endl;

        for (int nn: result)
        {
            cout<<nn<<" ";
        }
        cout<<endl;
        
    }

    
    
}