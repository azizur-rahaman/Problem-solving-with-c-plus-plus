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
    vi arrA(n), arrB(n);

    fori(n)
        cin>>arrA[i];

    fori(n)
        cin>>arrB[i];

    bool flag = true;

    for (int i = 0; i < n; i++)
    {   
        auto it = find(arrA.begin(), arrA.end(), arrB[i]);

       if(it == arrA.end()){
            flag = false;
            break;
       }

       arrA.erase(it);
    }
    
    if(flag) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
              
}

int32_t main()
{

    int t = 1;
    // cin>>t;

    while (t--)
        solved();
}