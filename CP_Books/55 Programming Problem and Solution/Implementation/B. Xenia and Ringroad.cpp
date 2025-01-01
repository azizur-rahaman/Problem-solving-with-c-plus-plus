#include<iostream>
#include<vector>
using namespace std;

#define LL long long int

int main(){
    LL n, m;
    cin >> n >> m;
    vector<LL> arr(m);

    for (LL i = 0; i < m; i++) cin >> arr[i];

    LL curr = 1, cnt = 0;
    for (LL i = 0; i < m; i++) {
        if (curr <= arr[i]) {
            cnt += arr[i] - curr; 
        } else {
            cnt += (n - curr + arr[i]); 
        }
        curr = arr[i];
    }

    cout << cnt << endl;
}