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
   string b1,b2;
   string b3,b4;

   cin>>b1>>b2>>b3>>b4;

   if(b2 == b4)
        cout<<"ARE Brothers"<<endl;
    else cout<<"NOT"<<endl;
   
}

int32_t main()
{

    int t = 1;
    // cin>>t;

    while (t--)
        solved();
}