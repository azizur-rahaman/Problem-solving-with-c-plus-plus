#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int student,n, result=0;
    cin>>student>>n;
    int list[n];
    for (int i = 0; i < n; i++)
    {   

        cin>>list[i];

    }
    
    sort(list, list+n);

    result = INT_MAX;

    for (int i = student; i <= n; i++)
    {
        result = min(result, abs(list[i-1] - list[i-student]));
    }
    
    cout<<result<<endl;
    
}