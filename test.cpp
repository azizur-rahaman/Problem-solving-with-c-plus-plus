#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n,m;
    cin>>n>>m;

    multiset<int> n_mset;
  

    
    for (int i = 0; i < n; i++)
    {   
        int temp;
        cin>>temp;
        n_mset.insert(temp);
    }

    for (int i = 0; i < m; i++)
    {   
        int temp;
        cin>>temp;

        auto it = n_mset.upper_bound(temp);

        if(it == n_mset.begin()) cout<<"-1"<<endl;
        else {
            cout<< *(--it) <<endl;
            n_mset.erase(it);
        }
    }



    return 0;
}
