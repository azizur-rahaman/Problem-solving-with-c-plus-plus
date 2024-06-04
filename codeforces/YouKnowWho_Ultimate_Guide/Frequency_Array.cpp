#include<iostream>
#include <string>
#include<bitset>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

#define int long long int
#define vi vector<int>
#define mpii map<int, int>
#define fori(n) for(int i=0; i < n; i++)

void solved()
{
    int n,m;
    cin>>n>>m;

    mpii mp;

    fori(n){
        int temp;
        cin>>temp;
        mp[temp]++;
    }

    for (int i = 1; i <= m; i++)
        cout<<mp[i]<<endl;
    
       
              
}

int32_t main()
{

    int t = 1;
    // cin>>t;

    while (t--)
        solved();
}