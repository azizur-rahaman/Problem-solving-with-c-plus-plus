#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    map<int,int> friends;

    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin>>temp;

        friends[temp-1]=i;

    }

    for (int i = 0; i < n; i++)
    {
        cout<<friends[i]<<" ";
    }
    cout<<endl;
    
}