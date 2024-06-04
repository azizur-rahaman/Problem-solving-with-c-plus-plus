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
   int n;
   cin>>n;

   int sum=0;

   for (int i = 0; i < n; i++){
        char ch;
        cin>>ch;
        sum += (ch - '0');
   }

   cout<<sum<<endl;
}

int32_t main()
{

    int t = 1;
    // cin>>t;

    while (t--)
        solved();
}