#include<bits/stdc++.h>
using namespace std;

int linearSearch(int n, int num, vector<int> &arr)
{
    for(int i=0; i<n; i++){
        if(arr[i] == num) {
            return i;
        }
    }

    return -1;
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
