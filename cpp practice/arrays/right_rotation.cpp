#include<bits/stdc++.h>
using namespace std;

    void rotate(vector<int>& nums, int k) {

        k=k%nums.size();
        reverse(nums.begin(),nums.begin()+(nums.size()-k));

        reverse(nums.begin()+(nums.size()-k),nums.end());
    
        reverse(nums.begin(),nums.end());
    }




int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int k;
    cin>>k;
    
    rotate(arr,k);

    for(int i =0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}
