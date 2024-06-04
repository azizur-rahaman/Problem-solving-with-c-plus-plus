#include <bits/stdc++.h>

#include<iostream>
#include <string>
#include<bitset>
#include<algorithm>


using namespace std;


void solved()
{
    int n;
    cin >> n;
    
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin>>arr[i];
    
    reverse(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
        
}

int main()
{

    int t = 1;
    // cin>>t;

    while (t--)
        solved();
}