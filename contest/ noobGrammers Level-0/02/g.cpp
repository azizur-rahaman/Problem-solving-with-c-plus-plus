#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    string ss;
    cin>>ss;

    set<char> st;

    for (auto i : ss)
    {
        st.insert(i);
    }
    

    if(st.size() % 2  == 1) cout<< "IGNORE HIM!" << endl;
    else cout<< "CHAT WITH HER!" << endl;
    

    return 0;
}