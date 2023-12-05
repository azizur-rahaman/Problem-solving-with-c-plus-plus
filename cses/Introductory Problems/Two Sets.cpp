#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> set;
    int sum = (n*(n+1))/2;
    for(int i = 1; i <= n; i++) {
        set.push_back(i);
    }
    if(sum%2==0){
        cout<<"YES"<<endl;
        if(n%2==0){
            bool flag = true;
            cout<<n/2<<endl;
            for(int i=0; i<n; i+=2){
                if(flag){
                    cout<<set[i]<<" ";
                    flag = false;
                }
                else{
                    cout<<set[i+1]<<" ";
                    flag  = true;
                }
            }
            cout<<endl;
            flag = false;
            cout<<n/2<<endl;
            for(int i=0; i<n; i+=2){
                if(flag){
                    cout<<set[i]<<" ";
                    flag = false;
                }
                else{
                    cout<<set[i+1]<<" ";
                    flag  = true;
                }
            }

        }
        else{
            bool flag = true;
            cout<<n/2+1<<endl;
            cout<<1<<" ";
            for(int i=1; i<n; i+=2){
                if(flag){
                    cout<<set[i]<<" ";
                    flag = false;
                }
                else{
                    cout<<set[i+1]<<" ";
                    flag  = true;
                }
            }
            cout<<endl;
            flag = false;
            cout<<n/2<<endl;
            for(int i=1; i<n; i+=2){
                if(flag){
                    cout<<set[i]<<" ";
                    flag = false;
                }
                else{
                    cout<<set[i+1]<<" ";
                    flag  = true;
                }
            }
        }
    }
    else{
        cout<<"NO"<<endl;
    }


}
