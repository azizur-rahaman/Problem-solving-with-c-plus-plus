#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string result="";
    for (int i = 1; i <=n; i++)
    {
        if(i!=n){
            if(i%2==0){
                result+="I love that ";
            }else{
                result+="I hate that ";
            }
        }else{
            if(i%2==0){
                result+="I love it ";
            }else{
                result+="I hate it ";
            }
        }
    }
    cout<<result<<endl;
    
}