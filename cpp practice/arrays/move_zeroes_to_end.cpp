#include<bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    int k=0;

    for(int i=0; i<n; i++) {
        if(a[i] != 0) a[k]=a[i],k++;
    }
    
    for(int i=k; i<n; i++)
        a[i]=0;
    
    return  a;
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
