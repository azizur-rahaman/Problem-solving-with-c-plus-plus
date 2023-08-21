#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,temp;
    cin>>n>>k;
    vector<int> scoreList;
    int sum=0;

    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        scoreList.push_back(temp);

    }

    for (int i = 0; i < n; i++)
    {
        if(scoreList[i]>0 && scoreList[i]>=scoreList[k-1]){
            sum++;
        }
    }
    
    
    cout<<sum<<endl;
    
}