#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,h,result=0;
    cin>>n>>h;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {   int temp;
        cin>>temp;
        if(temp>h) result+=2;
        else result+=1;

    }

    cout<<result<<endl;
}