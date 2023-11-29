#include<iostream>
using namespace std;

#define REP(n) while(n != 1)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int n;
    cin>> n;
    REP(n)
    {
        cout<<n<< " ";
        if(n%2 == 0) n=n/2;
        else if(n%2 != 0) n = (n * 3) + 1;
    }
    cout<<"1";
}