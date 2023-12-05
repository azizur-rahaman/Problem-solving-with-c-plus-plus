#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        vector<int> arr;

        for (int i = 0; i < n; i++)
        {   
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }

        
        sort(arr.begin(), arr.end());

        if(n%2==0) arr.push_back(arr[n/2] + 2);
        else arr.push_back(arr[(n/2)+1] + 1);

        int counter=0, medium = (n+1) / 2;

        for (int i = 0; i < n+1; i++)
        {   
            counter+= abs(arr[i]- arr[n]);
        }
        
        cout<<counter<<endl;
    }

    return 0;
}
