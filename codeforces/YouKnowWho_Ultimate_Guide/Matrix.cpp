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
    int n;
    cin>>n;

    vector<vector<int> > arr(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++){
            int temp;
            cin>>temp;
            arr[i][j] = temp;
        }
        
    }


    int firstDiagonal = 0;
    int secondDiogonal = 0;

    for (int i = 0; i < n; i++)
        firstDiagonal += arr[i][i];
    for (int i = 0; i < n; i++)
        secondDiogonal += arr[i][n-1-i];
    

    cout<< abs(firstDiagonal-secondDiogonal) <<endl;          
}

int32_t main()
{

    int t = 1;
    // cin>>t;

    while (t--)
        solved();
}