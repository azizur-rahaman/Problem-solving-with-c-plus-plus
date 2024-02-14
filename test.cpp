#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
    multimap<int,char> mm;

    char c = 'a';

    for (int i = 0; i < 10; i++)
    {
        mm.insert(make_pair(0,i));
    }
    
    cout<< mm.find(0)->second <<endl;
    // for ( pair<int,int> p : mm) cout<< p.first << " " << p.second << endl;
}
