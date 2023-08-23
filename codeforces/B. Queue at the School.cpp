#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t,counter=0;
    cin>>n>>t;
    string str;
    cin>>str;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
        if(str[j]=='B' && str[j+1]=='G'){
            str[j]='G';
            str[j+1]='B';
            j++;
        }
        }
    }
    
       
    cout<<str<<endl;
    }
