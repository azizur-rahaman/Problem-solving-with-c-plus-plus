#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    sort(s.begin(), s.end());

    vector<string> vs;
    do {
        vs.push_back(s);

    }while (next_permutation(s.begin(), s.end()));
    
    cout<<vs.size()<<endl;

    for (string x: vs)
    {
        cout<<x<<endl;
    }
    
}