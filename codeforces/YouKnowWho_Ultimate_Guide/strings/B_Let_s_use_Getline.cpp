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
   string ss;
   getline(cin,ss);

   for (int i = 0; i < ss.size(); i++)
   {
        if(ss[i] == '\\'){
            break;
        }

        cout<<ss[i];
   }
   
}

int32_t main()
{

    int t = 1;
    // cin>>t;

    while (t--)
        solved();
}