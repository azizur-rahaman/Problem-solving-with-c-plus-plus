#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define mpii map<int, int>
#define fori(n) for(int i=0; i < n; i++)

void solved()
{
   int arr[6][6];



   for (int i = 0; i < 6; i++)
   {    
        for (int j = 0; j < 6; j++)
            cin>>arr[i][j];
        
   }

    int maxi = LONG_MIN;
    for (int i = 0; i <= 3; i++){    
        for (int j = 0; j <= 3; j++){
            
            int sum = 0;
            for (int k = 0; k < 3; k++){
                sum += arr[i][j+k];
                sum += arr[i+2][j+k];
            }

            sum += arr[i+1][j+1];
            maxi = max(maxi, sum);
        }
        
   }

   cout<<maxi<<endl;
      
}

int32_t main()
{

    int t = 1;
    // cin>>t;

    while (t--)
        solved();
}