#include<iostream>
#include<vector>
#include<string>

using namespace std;

#define int long long int
#define vi vector<int>
#define mpii map<int, int>
#define fori(n) for(int i=0; i < n; i++)

void solved()
{  
   string s1,s2;
   cin>>s1>>s2;

   if(s1.compare(s2) <= 0)
        cout<<s1<<endl;
    else cout<<s2<<endl;
}

int32_t main()
{

    int t = 1;
    // cin>>t;

    while (t--)
        solved();
}