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
   cin>>ss;
   
   auto it1 = ss.find("010");
   auto it2 = ss.find("101");

   if(it1 != string::npos || it2 != string::npos)
        cout<<"Good"<<endl;
    else cout<<"Bad"<<endl;
}

int32_t main()
{

    int t = 1;
    cin>>t;

    while (t--)
        solved();
}