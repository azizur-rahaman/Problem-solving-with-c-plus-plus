#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long int agruments)
{
    if(agruments<2) return false;
    else if(agruments==2) return true;
    else if(agruments%2==0) return false;
    else{
        for(int i=3;i*i<=agruments;i+=2){
            if(agruments%i==0) return false;
        }
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);



    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long temp, srt;
        cin>>temp;
        srt=sqrt(temp);
        if(srt*srt==temp && isPrime(srt)==true) cout<<"YES"<<endl; 
        else cout<<"NO"<<endl;    
    }
  
  
}