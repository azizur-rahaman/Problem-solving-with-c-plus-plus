#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    map<int,int> customers_a_l_freq;

    while (t--)
    {
        int arrival, leaving;
        cin>>arrival>>leaving;

        customers_a_l_freq[arrival]=1;
        customers_a_l_freq[leaving]= -1;
    }
    int maxx=0, counter=0;

    for (auto& it : customers_a_l_freq)
    {   
        counter += it.second;
        maxx = max(maxx, counter);

    }

    cout<<maxx<<endl;
    
}