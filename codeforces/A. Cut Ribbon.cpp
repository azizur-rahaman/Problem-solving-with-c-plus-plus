#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int result=0;

    for (int i = 0; i <= 4000; i++)
    {
        for (int j = 0; j <= 4000; j++)
        {
            int temp = n - ((i*a) + (j*b));
            if(temp<0)break;
            double k = (temp/ (double)c);
            if(k==(int)k) result=max(result,(int)(k+i+j));
        }
        
    }

    cout<<result<<flush;

}