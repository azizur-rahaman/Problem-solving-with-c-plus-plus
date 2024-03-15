#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	
    int k = 0;

    for (int i = 1; i < n; i++)
    {
        if(arr[k] != arr[i]) {
            arr[k+1] = arr[i];
            k++;
        }
    }

    return k;
    
}


int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int len = removeDuplicates(arr,n);

    for(int i =0; i<=len; i++)
        cout<<arr[i]<<" ";

    return 0;
}
