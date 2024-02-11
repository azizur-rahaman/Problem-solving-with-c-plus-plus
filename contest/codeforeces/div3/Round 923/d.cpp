#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;

    while (t--) {
        ll n, queries;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin>> arr[i];
        }

        cin >> queries;

        while (queries--) {
            int x, y;
            cin >> x >> y;

            int i = x - 1;
            int j = x - 1;

            while (i < y) {
                                
                    if(arr[j] != arr[i]) {
                        cout << (j+1) << " " << (i+1) << endl;
    
                        break;
                    }

                i++;
            }

            if(i == y) cout << -1 << " " << -1 <<endl;
        }
        cout<<endl;
        
    }
    return 0;
}
