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

   if((ss[0]-'0') % 2 == 0)
        cout<<"EVEN"<<endl;
    else cout<<"ODD"<<endl;  
}

int32_t main()
{

    int t = 1;
    // cin>>t;

    while (t--)
        solved();
}