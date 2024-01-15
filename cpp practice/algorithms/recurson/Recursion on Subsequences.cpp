#include<bits/stdc++.h>
using namespace std;

void subsequences(int ind, vector<int> &ds, int arr[], int n){
    
    if(ind == n)  {
        for(auto it : ds) cout<< it << " ";
    
        if(ds.size() == 0) cout<<"{}";
        cout<< endl;
        return;
    }

    // not pick, or nor take condition, this element is not added to your subsequences
    subsequences(ind+1, ds, arr, n);

    // take or pick the particular index into the subsequence
    ds.push_back(arr[ind]);
    subsequences(ind+1, ds, arr, n);
    ds.pop_back();

}

int main(){

    int arr[3] = {3,2,1};
    vector<int> ds;
    subsequences(0, ds, arr, 3);
}