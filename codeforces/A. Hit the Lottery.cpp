#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, counter=0;
    cin>>n;

    counter+= n/100;
    n=n%100;
    counter+=n/20;
    n=n%20;
    counter+=n/10;
    n=n%10;
    counter+=n/5;
    n=n%5;
    counter+=n;

    cout<<counter<<flush;    
}