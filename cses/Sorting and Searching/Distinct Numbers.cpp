#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>> t;
 
    set<long long> ss;
 
    while (t--)
    {   
        long long temp;
        cin>>temp;
        ss.insert(temp);
    }
 
    cout<<ss.size()<<endl;
    
}
