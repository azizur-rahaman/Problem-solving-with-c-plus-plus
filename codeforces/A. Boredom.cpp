#include<bits/stdc++.h>
using namespace std;
typedef long long ln;

ln dp[100005] = {0};
ln dp2[100005]={0};

ln bordom(const int i){
    if(i==0) return 0;
    if(i==1) return dp[1];

    int x = i*dp[i];
    return max(bordom(i-1), bordom(i-2) + x);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ln n,i,b,m=0;

    cin>>n;

    for (int i = 0; i < n; i++)
    {    
        cin>>b;
        dp[b]++;
        m=max(m,b);
    }

    
    cout<<bordom(m)<<endl;
}