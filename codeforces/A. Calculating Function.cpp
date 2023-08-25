#include<bits/stdc++.h>
using namespace std;

void positiveInteger(long long n){

    if(n%2==0){
        cout<<(n/2)<<endl;
    }else{
        cout<<((n/2)-n)<<endl;
    }
    
}
int main(){
    long long n;
    cin>>n;
    positiveInteger(n);
    
}