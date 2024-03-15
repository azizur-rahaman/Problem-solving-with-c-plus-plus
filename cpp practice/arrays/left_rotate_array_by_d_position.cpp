#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>arr, int k) {

    int n = arr.size();
    

    if(k==0){
        return arr;
    } 

    k = k % n;
    while (k--){  
    
        int temp = arr[0];      
        for (int i = 0; i < n-1; i++)  arr[i] = arr[i+1];
        arr[n-1] = temp;
           
    }

    return  arr;
}




int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    rotateArray(arr,n);

    for(int i =0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}
