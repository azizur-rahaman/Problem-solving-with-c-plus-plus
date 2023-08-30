#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long int t;
    cin>>t;
    long int answer[t];
    for (int i = 0; i < t; i++)
    {
        int temp;
        cin>>temp;
        if(temp%2==0) answer[i] = (temp/2)-1;
        else answer[i]=temp/2;
    }
    
    for (int i = 0; i < t; i++)
    {
        cout<<answer[i]<<endl;
    }
    
}