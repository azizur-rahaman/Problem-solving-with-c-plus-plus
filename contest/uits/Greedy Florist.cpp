#include<bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int n,k;
    cin >> n >> k;
    
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    sort(arr, arr+n, [](const int& x, const int& y){return x>y;});
    
    int t_cost = 0;
    for (int i = 0; i < n; ++i) {
        t_cost += (1 + i / k) * arr[i];
    }
    std::cout << t_cost << "\n";
    
    return 0;
}