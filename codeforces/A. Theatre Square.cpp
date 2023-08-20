#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,a, flagstonesX, flagstonesY;
    cin>>n>>m>>a;


    if(n%a==0){
        flagstonesX= n/a;
    }else{
        flagstonesX= (n/a)+1;
    }

    if(m%a==0){
        flagstonesY= m/a;
    }else{
        flagstonesY= (m/a)+1;
    }

    cout<<flagstonesX*flagstonesY<<endl;   
}