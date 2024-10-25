#include<iostream>
using namespace std;

int invertedPattern(){
        int n;
    cin>>n;
    
    for(n; n>0; n--){
        for(int j=1; j<=n; j++){
            cout<<j;
        }
        cout<<endl;
    }
}