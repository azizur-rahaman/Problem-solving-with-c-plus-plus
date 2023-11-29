#include<iostream>
#include <climits>
#include <vector>
#include "../../../../../opt/homebrew/Cellar/gcc/13.2.0/include/c++/13/bits/algorithmfwd.h"
using namespace std;

int main(){
    int n;
    cin>>n;
    int x[n];

    for (int i = 0; i < n; i++)
    {
       cin>> x[i];
    }

 
    int count=1;
    vector<int> v;
    for (int i = 0; i < n-1; i++)
    {
       if(x[i]<=x[i+1]){
        count++;
       }else{
        v.push_back(count);
        count=1;
       }
    }

auto it = max_element(v.begin(),v.end());
    cout<<(*it);    
}