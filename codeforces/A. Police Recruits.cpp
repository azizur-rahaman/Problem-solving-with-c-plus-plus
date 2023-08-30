#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, policeman=0, crimes=0, result=0;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
         int temp;
         cin>>temp;

         if(temp==-1){
            if(policeman+temp<0){
            result++;
            }else{
                policeman--;
            }
            
         }else{
            policeman+=temp;
         }

    }

    cout<<result<<endl;
    
}