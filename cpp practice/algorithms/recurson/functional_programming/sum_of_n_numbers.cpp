#include<bits/stdc++.h>
using namespace std;

int functional_programming(int n){
    if(n==0) return 0;
    return n + functional_programming(n-1);
}

int main(){
    
    int sum = functional_programming(4);

    cout<<sum<<endl;
}