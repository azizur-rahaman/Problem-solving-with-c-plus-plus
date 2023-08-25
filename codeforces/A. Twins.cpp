#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0,counter=0,t_sum=0;
    vector<int> coins;
    cin>>n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        sum+=temp;
        coins.push_back(temp);
    }
    sum/=2;
    sort(coins.rbegin(), coins.rend());

    for (int i = 0; i < n; i++)
    {
        if(t_sum<=sum){ 
            t_sum+=coins.at(i);
            counter++;
        }
    }

    cout<<counter<<endl;
        
}