#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,result=0,sum=0,x,y;
    cin>>n;
    
    for (size_t i = 0; i < n; i++)
    {
        
        cin>>x>>y;
        sum+= (-x+y);
        if(sum>result){
            result=sum;
        }
    }

    cout<<result<<endl;
    
}