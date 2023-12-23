#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll n;
    cin >> n;

    vector<ll> arr, sorted_array;

    for (ll i = 0; i < n; i++)
    {
        ll temp;
        cin>>temp;

        arr.push_back(temp);
    }

    sorted_array=arr;
    sort(sorted_array.begin(),sorted_array.end());
    
    ll current_int = sorted_array[0];

    ll count=0, j=0;
    while (j != n)
    {   
        count++;
        for (ll i=0; i<n; i++)
        {
            if(arr[i]==current_int) {
                
                j++;
                current_int = sorted_array[j];
                if(j==n) {
                    cout<<count<<endl;
                    return 0;
                }
            }
        }
    }

    cout<<count<<endl;
 
    


    return 0;
}
