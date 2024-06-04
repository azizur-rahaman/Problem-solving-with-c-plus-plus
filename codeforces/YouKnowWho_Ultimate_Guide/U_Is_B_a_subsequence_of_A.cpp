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

    vi arr(n);
    vi subarr(m);

    for (int i = 0; i < n; i++)
        cin>>arr[i];
    for (int i = 0; i < m; i++)
        cin>>subarr[i];

    int cnt = 0;

    for (int i = 0; i < m; i++)
    {   
        int j=0;
        if(arr[i] == subarr[j]){

            cnt++;
            j++;

            for (int k = i+1; k < n; k++)
            {
                if(arr[k] == subarr[j])
                    cnt++, j++;
            }
            break;
        }
    }


    if(cnt == subarr.size()){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
              
}

int32_t main()
{

    int t = 1;
    // cin>>t;

    while (t--)
        solved();
}