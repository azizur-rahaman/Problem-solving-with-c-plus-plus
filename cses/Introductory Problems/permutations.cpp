#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    if(n==1){
        cout<<"1"<<endl;
    }else if(n<=3){
        cout<<"NO SOLUTION"<<endl;
    }else{
        vector<int> bp;

        for (int i = 2; i <= n; i+=2)
        {
            bp.push_back(i);
        }

        for (int i = 1; i <= n; i+=2)
        {
            bp.push_back(i);
        }
        
        for (auto& it : bp)
        {
            cout<<it<<" ";
        }
        
    }

    return 0;
}
