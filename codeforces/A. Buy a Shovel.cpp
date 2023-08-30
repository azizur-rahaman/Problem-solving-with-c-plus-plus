#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int k,r,counter=1,i=2, temp;
    cin>>k>>r;
    temp=k;
    while (true)
    {
        if(temp%10==0){
            cout<<counter<<flush;
            break;
        }else if(temp%10==r){
            cout<<counter<<flush;
            break;
        }
        temp=k*i;
        counter++;
        i++;
    }

    
}