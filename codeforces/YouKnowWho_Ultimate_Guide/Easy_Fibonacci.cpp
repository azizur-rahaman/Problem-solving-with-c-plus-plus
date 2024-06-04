// #include <bits/stdc++.h>

#include<iostream>
#include <string>
#include<bitset>
#include<algorithm>

using namespace std;


void solved()
{
    int n;
    cin >> n;

    int start=0, end=1;

    if(n == 1){
        cout<<start<<endl;
        return;
    }else if(n == 2){
        cout<<start<<" "<<end<<endl;
        return;
    }

    cout<<start<<" "<<end<<" ";

    for (int i = 3; i <= n; i++){
        int temp = start+end;

        cout<< temp << " ";
        start= end;
        end =temp;

    }
    
}

int main()
{

    int t = 1;
    // cin>>t;

    while (t--)
        solved();
}