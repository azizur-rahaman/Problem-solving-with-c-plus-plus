#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5};
    int total = 0;

    for_each(begin(arr), end(arr), [&](int x){
        total += x;
    });

    cout<<total<<endl;
}