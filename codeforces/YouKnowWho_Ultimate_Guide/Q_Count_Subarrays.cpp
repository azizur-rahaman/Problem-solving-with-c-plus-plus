#include<iostream>
#include <string>
#include<bitset>
#include<algorithm>
#include<vector>

using namespace std;

#define int long long int
#define vi vector<int>
#define fori(n) for(int i=0; i < n; i++)

void solved()
{
    int n;
    cin>>n;
    vi arr(n);

    fori(n)
        cin>>arr[i];

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
       for (int j = i; j < n; j++)
       {    
            bool flag = true;
            for (int k = i; k < j; k++)
            {
                if(arr[k] > arr[k+1]){
                    flag = false;
                    break;
                }
            }
            
            if(flag) cnt++;
            
       }
    }

    cout<<cnt<<endl;
              
}

int32_t main()
{

    int t = 1;
    cin>>t;

    while (t--)
        solved();
}