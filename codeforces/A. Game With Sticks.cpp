#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int x,y, i=1, counter=0;
    cin>>x>>y;
    
    while (true)
    {
        if(x-i==0)break;
        if(y-i==0)break;
        i++;
        counter++;
    }

    if(counter%2==0) cout<<"Akshat"<<flush;
    else cout<<"Malvika"<<flush;  
    
}