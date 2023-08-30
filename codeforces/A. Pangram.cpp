#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<char> unique_set[n];

    for (int i = 0; i < n; i++)
    {   
        char temp;
        cin>>temp;
        unique_set->insert(tolower(temp));
    }

    cout<<(unique_set->size()==26? "YES":"NO")<<endl;
    
}