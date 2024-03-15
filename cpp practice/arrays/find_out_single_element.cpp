#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr){
    int n = arr.size();

    int xorr = 0;
    for (int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main(){
    int n;
    cin>>n;
}