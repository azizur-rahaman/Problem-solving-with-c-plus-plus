#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;

    vector<int> math_s,prog_s,pe_s;
    int temp;
    for (int i = 1; i <= t; i++)
    {
        cin>>temp;
        
        if(temp==1) math_s.emplace_back(i);
        else if(temp==2) prog_s.emplace_back(i);
        else if(temp==3) pe_s.emplace_back(i);
    }
    
    int min_unique_s_len = min(math_s.size(), min(prog_s.size(), pe_s.size()));
    cout<<min_unique_s_len<<endl;

    for (int i = 0; i < min_unique_s_len; i++)
    {
        cout<<math_s[i]<<" "<<prog_s[i]<<" "<<pe_s[i]<<endl;
    }
}

    