#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    int list[t][2], counter=0;

    for (int i = 0; i < t; i++)
    {
        int a,b;
        cin>>a>>b;
        list[i][0]=a;
        list[i][1]=b;
    }

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if(list[i][0]==list[j][1]) counter++;
        }
        
    }
    cout<<counter<<flush;
    
}