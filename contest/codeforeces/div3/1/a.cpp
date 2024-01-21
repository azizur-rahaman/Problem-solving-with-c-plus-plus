#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;

    while (t--)
    {
        ll x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        ll min_x = min({x1, x2, x3, x4});
        ll max_x = max({x1, x2, x3, x4});
        ll min_y = min({y1, y2, y3, y4});
        ll max_y = max({y1, y2, y3, y4});

        ll side_length = max(max_x - min_x, max_y - min_y);
        ll area = side_length * side_length;

        cout << area << endl;


    }
    
}