#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    set<int> unique_set = {a,b,c,d};

    cout<<(4-unique_set.size())<<endl;
}