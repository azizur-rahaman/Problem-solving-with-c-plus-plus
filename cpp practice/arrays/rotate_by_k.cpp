#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>& arr, int n) {
    
    for (int i = 0; i < 1; i++)
    {  
        int temp = arr[0];

       for (int i = 1; i < n; i++)
            arr[i-1] = arr[i];
            
        arr[n-1] = temp;
       
    }

    return arr;
    
}



int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> rr = rotateArray(arr,n);

    for(int i =0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}
