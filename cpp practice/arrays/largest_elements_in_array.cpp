#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main(){
    int n;
    cin>>n;

    vi arr(n);

    for (int i = 0; i < n; i++)
        cin>>arr[i];
    
    int largest = arr[0];

    for (int i = 0; i < n; i++)
        if(arr[i]>largest) largest = arr[i];
    
    cout<<largest<<endl;
}