#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
    }

    map<int,int> freq;

    for (int i = 0; i < t; i++)
    {
        freq[arr[i]]++;
    }
    
    vector<pair<int, int>> vpair;
    
    for (auto& it : freq)
    {
        vpair.push_back(make_pair(it.first,it.second));
    }
    

    std::sort(vpair.begin(), vpair.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.second > b.second; });

    for (auto& it : vpair)
    {
        cout<< it.first<< " "<<endl;
    }

}