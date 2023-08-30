#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    set<int> unique_value;

    for (int i = 0; i < 2; i++)
    {
        int p_q;
        cin>>p_q;
        for (int j = 0; j < p_q; j++)
        {
            int temp;
            cin>>temp;
            unique_value.insert(temp);
        }
        
    }

    cout<<((n==unique_value.size())? "I become the guy.":"Oh, my keyboard!")<<endl;
}