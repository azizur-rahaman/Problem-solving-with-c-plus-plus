#include<bits/stdc++.h>
using namespace std;

int isSorted(int n, vector<int> a) {
    
    for(int i=1; i < n; i++){
        if(a[i] < a[i-1]) {
            return  0;
        }
    }
    return  1;
}


int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int r = isSorted(n,arr);

    cout<<(r==1? "YES" : "NO")<<endl;

    return 0;
}
