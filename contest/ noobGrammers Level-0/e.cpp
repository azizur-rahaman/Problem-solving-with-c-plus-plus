#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ll shelve, a1,a2,a3, b1,b2,b3;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>shelve;

    ll totalCup = (a1+a2+a3) / 5;
    if (((a1+a2+a3) % 5) > 0 ) totalCup+=1;

    ll totalMedals = (b1+b2+b3) / 10;
    if(((b1+b2+b3) % 10) >0)  totalMedals+=1;

    if( (totalCup+totalMedals) <= shelve) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
}
