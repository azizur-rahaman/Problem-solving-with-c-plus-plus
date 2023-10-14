#include<bits/stdc++.h>
using namespace std;

int multiply(int x, int y){
    if(y<=1) return 0;
    return multiply(x*5, y-1);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    cout<<25<<endl;
}
